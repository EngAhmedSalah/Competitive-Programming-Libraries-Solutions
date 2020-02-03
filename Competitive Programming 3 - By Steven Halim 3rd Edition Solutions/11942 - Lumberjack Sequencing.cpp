#include "bits/stdc++.h"
using namespace std;
typedef long long lld;
#define watch(x) cout<<(#x)<<" is "<<(x)<<"\n"
const int AKA = 1e6+6;
int a[AKA];
vector<int>ans;
int SD(){int i; scanf("%d" , &i); return i;}
lld SLL(){lld i; scanf("%lld" , &i); return i;}
int main()
{
   int t = SD() , c = 1;
   while(t--)
   {
       int as = 0 , des = 0 , no = 0;
       for(int i = 0 ; i < 10 ; ++i)
            a[i] = SD();
        for(int i = 0 ; i < 9 ; ++i)
            if(a[i] < a[i+1])
                as++;
            else if(a[i] > a[i+1])
                des++;
            else
                ++no;
        if(as == 9 || des == 9)
            ans.push_back(1);
        else
            ans.push_back(0);
   }
   puts("Lumberjacks:");
   for(auto x : ans)
        puts(x ? "Ordered" : "Unordered");
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
