#include "bits/stdc++.h"
using namespace std;
string s;
bool ispal(int i , int j)
{
    for( ; i < j ; )
        if(s[i++] != s[j--])
            return false;
        return true;
}
int main()
{
    while(cin>>s)
    {
        set<string>st;
        int Size = s.length();
        for(int i = 0 ; i < Size ; ++i)
        {
            for(int j = i ; j < Size ; ++j)
                if(ispal(i, j))
                {
                    string tmp = "";
                    for(int k = i ; k <=j ; ++k)
                        tmp+=s[k];
                    st.insert(tmp);
                }
        }
        cout<<"The string \'"<<s<<"\' contains "<<st.size()<<" palindromes.\n";
    }
}
