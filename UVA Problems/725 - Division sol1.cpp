#include "bits/stdc++.h"
using namespace std;
#define watch(x) cout<<(#x)<<"  is  "<<(x)<<"\n"
int idx[1000], a[1000], b[1000];
bool cpm( int s, int f )
{
    if( a[ f ] > a[ s ]  && a[s] && a[f])
        return true ;
    if( a[ f ] == a[ s ] && b[ f ] > b[ s ])
        return true ;
    if(!a[ f ] && a[s] )
        return true;
    return false ;
}
int main()
{
    int N ;
    while (true)
    {
        while(scanf("%d", &N) , N)
        {
            int as=0 , ansc=0;
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
                    idx[as] =as , a[as]=abcde , b[as++] = fghij , ++ansc;
                else
                    f_ans=false;
            }
            sort(idx, idx+as, cpm);
            for(int i=0 ; i<ansc; ++i)
                (i!=ansc-1) ? printf("%0.5d / %0.5d = %d\n",a[idx[i]], b[idx[i]], N) : printf("%0.5d / %0.5d = %d",a[idx[i]], b[idx[i]], N);
            if(!f_ans && !ansc)
                printf("There are no solutions for %d.\n", N);
            else
                puts("");
        }
        if(N)
                puts("");
        else
            break;
    }
}
