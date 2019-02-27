#include "bits/std++.h"
using namespace std;
typedef long long LL;
int main()
{
        int t;
        string s;
        cin>>t;
        getline(cin,s);
        while(t--)
        {
            stack <char > ch;
            getline(cin,s);
            int Size=s.length();
            bool flag = true;
            for(int x=0; x < Size; ++x)
                if(s[x] == '(' ||  s[x] == '[')
                    ch.push(s[x]);
                else
                {
                    if(ch.empty())
                        flag = false;
                    else if(ch.top() == '('  && s[x] == ')')
                        ch.pop();
                    else if(ch.top() == '['  && s[x] == ']')
                        ch.pop();
                    else
                        flag = false;
                }
            puts(flag ==false || ch.empty() == false ? "No" : "Yes");
        }
}
