#include "bits/stdc++.h"
using namespace std;
#define watch(x) cout<<(#x)<<"  is  "<<(x)<<"\n"
pair<int , int >arr[1000];
bool cpm(pair<int , int > P2 , pair<int , int > P1 )
{
    if(P1.first > P2.first)
        return true ;
    if(P1.first == P2.first && P1.second > P2.second)
        return true;
    return false;
}
int main()
{
    //freopen("output.txt", "w", stdout);
    int N ;
        scanf("%d", &N);
        while(N)
        {
            int as=0;
            int ansc=0;
            bool f_ans=true;
            for(int fghij = 1234 ; fghij <= 98765 / N ; ++fghij)
            {
                int abcde = N * fghij ;
                int temp, used = (fghij < 10000);
                temp = abcde ;
                while(temp)
                {
                    used |= (1 << (temp % 10)) ;
                    temp /=10;
                }
                temp = fghij;
                while(temp)
                {
                    used |= 1 << (temp % 10) ;
                    temp /=10;
                }
                if(used == (1<<10)-1)
                {
                    arr[as].first=abcde;
                    arr[as++].second = fghij;
                    ++ansc;
                }
                else
                    f_ans=false;
            }
            sort(arr, arr+ansc, cpm);
            for(int i=0 ; i<ansc; ++i)
                (i!=ansc-1) ? printf("%0.5d / %0.5d = %d\n",arr[i].first, arr[i].second, N) : printf("%0.5d / %0.5d = %d",arr[i].first, arr[i].second, N);
            if(!f_ans && !ansc)
                printf("There are no solutions for %d.\n", N);
            else
                puts("");
        scanf("%d", &N);
        if(N)
                puts("");
    }
}
