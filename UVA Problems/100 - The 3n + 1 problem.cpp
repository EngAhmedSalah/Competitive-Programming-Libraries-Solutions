using namespace std ;
#include "bits/stdc++.h"
int num_of_elements_fun_3n_plus1(int n)
{
    if(n==1)
        return 1;
    if(n%2)
         return 1+num_of_elements_fun_3n_plus1(3*n+1);
    else
         return 1+num_of_elements_fun_3n_plus1(n/2);
}
int main()
{
        int a , j;
        while(scanf("%d%d",&a,&j)  != EOF)
        {
            int ans=0;
        for(int i=min(a,j);i<=max(a,j);++i)
            ans=max(ans,num_of_elements_fun_3n_plus1(i));
        printf("%d %d %d\n",a,j,ans);
        }
}
