#include "bits/stdc++.h"
using namespace std;
typedef long long lld;
#define watch(x) cout<<(#x)<<" is "<<(x)<<"\n"
int SD(){int i; scanf("%d" , &i); return i;}
lld SLL(){lld i; scanf("%lld" , &i); return i;}
const int AKA = 1e6+6;
string b[10];
int a[10] , idx[10];
bool cmp(int s , int f)
{
    if(a[f]  < a[s])
        return true;
    else if(a[f] == a[s] && b[f] < b[s])
    return false;
}
int main()
{
    int t = SD(), c = 1;
    while(t--)
    {
        iota(idx, idx + 10, 0);
        for(int i = 0 ; i < 10 ; ++i)
        {
            string s ;
            int v;
            cin>>s>>v;
            b[i] = s, a[i] = v;
        }
        sort(idx, idx + 10, cmp);
        cout<<"Case #"<<c++<<":\n";
        cout<<b[idx[0]]<<"\n";
        int cur = a[idx[0]];
        for(int i = 1 ; i < 10 ; ++i)
        {
            if(a[idx[i]] == cur)
                cout<<b[idx[i]]<<"\n";
            else
                break;
        }
    }
}
/*
                                       ███████████████████████████
                                       ███████▀▀▀░░░░░░░▀▀▀███████
                                       ████▀░░░░░░░░░░░░░░░░░▀████
                                       ███│░░░░░░░░░░░░░░░░░░░│███
                                       ██▌│░░░░░░░░░░░░░░░░░░░│▐██
                                       ██░└┐░░░░░░░░░░░░░░░░░┌┘░██
                                       ██░░└┐░░░░░░░░░░░░░░░┌┘░░██
                                       ██░░┌┘▄▄▄▄▄░░░░░▄▄▄▄▄└┐░░██
                                       ██▌░│██████▌░░░▐██████│░▐██
                                       ███░│▐███▀▀░░▄░░▀▀███▌│░███
                                       ██▀─┘░░░░░░░▐█▌░░░░░░░└─▀██
                                       ██▄░░░▄▄▄▓░░▀█▀░░▓▄▄▄░░░▄██
                                       ████▄─┘██▌░░░░░░░▐██└─▄████
                                       █████░░▐█─┬┬┬┬┬┬┬─█▌░░█████
                                       ████▌░░░▀┬┼┼┼┼┼┼┼┬▀░░░▐████
                                       █████▄░░░└┴┴┴┴┴┴┴┘░░░▄█████
                                       ███████▄░░░░░░░░░░░▄███████
                                       ██████████▄▄▄▄▄▄▄██████████
                                       ███████████████████████████

                         ▂▃▄▅▆▇█▓▒░Ahmed_Salah(ScreamingEagle)░▒▓█▇▆▅▄▃▂
*/
