#include <bits/stdc++.h>
using namespace std;
//deque<char>s1 , s2 , ans;
int main()
{
    //freopen("output.txt" , "w" , stdout);
    int t;
    cin>>t;
    while(t--)
    {
        char s1[1000], s2[1000];
        cin>>s1>>s2;
        int sz1 = strlen(s1), sz2 = strlen(s2), v, carry = 0 , f = 1;
        vector<int> num1(300, 0), num2(300, 0), ans;
        //reverse(s1 , s1 + sz1);
        //reverse(s2 , s2 + sz2);
        for(int i = 0 ; i < sz1 ; ++i)
            num1[i] = s1[i] - '0';
        for(int i = 0 ; i < sz2 ; ++i)
            num2[i] = s2[i] - '0';
        for(int i = 0 ; i < max(sz1, sz2) ; ++i)
        {
            v = num1[i] + num2[i] + carry;
            ans.push_back(v % 10);
            carry = v / 10;
        }
        if(carry)
            ans.push_back(carry);
        int i = 0;
        while(ans[i] == 0)
                ++i;
        for(; i < ans.size() ; ++i)
            printf("%d" , ans[i]);
        puts("");
    }

}
