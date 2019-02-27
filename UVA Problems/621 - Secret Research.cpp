#include "bits/stdc++.h"
using namespace std ;
int SD(){int x;scanf("%d",&x);return x;}
int main()
{
        int t=SD();
        while(t--){
            string s;
            cin>>s;
            int Size=s.length();
            if(s=="1" || s=="4" || s=="78")
                printf("+\n");
            else if(s[Size-2]=='3' && s[Size-1]=='5')
                printf("-\n");
            else if(s[0]=='9' && s[Size-1]=='4')
                printf("*\n");
            else if(s[0]=='1' && s[1]=='9' && s[2]=='0')
                printf("?\n");
        }
}