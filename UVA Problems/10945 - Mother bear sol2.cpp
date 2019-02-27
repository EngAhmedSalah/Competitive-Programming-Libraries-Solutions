#include "bits/stdc++.h"
using namespace std;
const int AKA=6e6+6;
char s[AKA] , temp[AKA];
int main()
{
    //freopen("out.txt" , "w" , stdout);
    while(gets(s) && strcmp(s , "DONE"))
    {
        memset(temp , '\0' , sizeof temp);
        bool pal=true;
        int Size=strlen(s);
        for(int i=0,j=0; i<Size; ++i)
            if(isalpha(s[i]))
               s[i]=(char)tolower(s[i]) , temp[j++]=s[i];
        Size=strlen(temp);
        for(int i=0;i<Size/2;++i)
            if(temp[i]!=temp[Size-1-i])
                {pal=false; break;}
        puts((pal) ? "You won't be eaten!" : "Uh oh..");
    }
}
