#include "bits/stdc++.h"
using namespace std;
int main()
{
        int c=0;
        string s;
        while(getline(cin,s))
        {
            int Size=s.length();
            for(int i=0; i<Size; ++i)
                if(s[i]=='"' && c==0)
                {
                    printf("\`\`");
                    ++c;
                }
                else if(s[i]=='"' && c==1)
                {
                    printf("\'\'");
                    --c;
                }
                else
                    printf("%c",s[i]);
            printf("\n");
        }
}