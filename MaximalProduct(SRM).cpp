#include <bits/stdc++.h>
using namespace std;
typedef long long lld;
int SD(){int x; scanf("%d" , &x); return x;}
const int OO = 0x3f3f3f3f;
lld mem[101][101];
class MaximalProduct
{
public:

    lld solve(int s , int k)
    {
        if(s == 0)
        {
            if(k == 0)
                return 1;
            return 0;
        }
        lld &ret = mem[s][k];
        if(~ret)
            return ret;
        for(int i = s ; i >= 0 ; --i)
             ret = max(ret , 1LL* solve(s - i, k - 1) * i);
        return ret;
    }
    lld maximalProduct(int s, int k)
    {
        for(int i = 0 ; i < 101 ; ++i)
            memset(mem[i] , -1 , sizeof mem[i]);
        return solve(s , k);
    }
};
