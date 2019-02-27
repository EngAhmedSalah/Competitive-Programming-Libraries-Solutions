#include "bits/stdc++.h"
using namespace std;
typedef long long lld;
#define watch(x) cout<<(#x)<<" is "<<(x)<<"\n"
const int AKA = 1e6+6;
char s[AKA];
int SD(){int i; scanf("%d" , &i); return i;}
lld SLL(){lld i; scanf("%lld" , &i); return i;}
int main()
{
    lld p , bud  , h  , w  , bed ;
    while(scanf("%lld%lld%lld%lld", &p, &bud, &h, &w) == 4)
    {
        lld ans = LONG_MAX;
        for(int i = 0 ; i < h ; ++i)
        {
            lld hc = SLL() , capa = 0;
            for(int j = 0 ; j < w ; ++j)
                bed = SLL() , capa = max(capa , bed);
            if(hc * p <= bud && capa >= p)
                ans = min(ans, hc);
        }
        (ans > bud) ? puts("stay home") : printf("%d\n", ans * p);
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
