#include <cmath>
#include <iostream>
using namespace std;
int main()
{
    string s1;
    do
    {
        getline(cin,s1);
        if(s1=="DONE")
            break;
        bool flag =true;
        string s2="";
        int Size=s1.length();
        for(int x=0; x<Size; ++x)
        {
            if(isalpha(s1[x]))
            {
                if(s1[x]>='A' && s1[x]<='Z')
                    s2+=(char)(s1[x]+32);
                else
                    s2+=s1[x];
            }
        }
        int Size2=s2.length();
        for(int x=0,y=Size2-1; x<Size2-1 && y>=0; ++x,--y)
            if(s2[x]!=s2[y])
                flag=false;
        if(flag==true)
            cout<<"You won't be eaten!\n";
        else
            cout<<"Uh oh..\n";
    }while(s1!="DONE");
}
/*
 float sum;
      int x=10,y=20;
      sum=(float)(x/y);
      cout<<sum;
*/
