#include "bits/stdc++.h"
using namespace std;
#define watch1(x) cout<<(#x)<<" = "<<(x)<<"\n"
#define watch2(x , y) cout<<(#x)<<" = "<<(x)<<"  "<<(#y)<<" = "<<(y)<<"\n"
#define AC_ISA ACCEPTED--
#define CFT int ACCEPTED = 1
#define MYT int ACCEPTED = 1000
#define write_to_file() freopen("output.txt" , "w" , stdout)
#define GeoOutputFix(VV) cout<<fixed<<setprecision(VV)
typedef long long lld;
typedef pair<lld, lld> dd;
typedef complex<long double> point;
#define X real()
#define Y imag()
#define dist(a , b) sqrt(pow(a.X - b.X , 2) + pow(a.Y- b.Y , 2))
int dr[] = {1 , 1 , 1 , 0 , 0 , -1 , -1 , -1};
int dc[] = {-1 , 0 , 1 , -1 , 1 , -1 , 0 , 1};
int ddr[] = {1 , 0 , 0 , -1};
int ddc[] = {0 , -1 , 1 , 0};
int SD(){int i ;scanf("%d", &i);return i;}
lld SLL(){lld i;scanf("%lld", &i);return i;}
char SC(){char i;scanf("%c", &i);return i;}
const double PI = acos(-1);
const int AKA = 1e6+6 , N = 1e3 + 3;
char s[N][N];
int v = 1 , vis[N][N] , n;
void DFS(int r , int c)
{
    if(r < 0 || r >= n || c < 0 || c >= n || vis[r][c] == v || s[r][c] != '1')
        return;
    vis[r][c] = v;
    for(int i = 0 ; i < 8 ; ++i)
        if(vis[r + dr[i]][c + dc[i]] != v)
            DFS(r + dr[i] , c + dc[i]);
}
int main ()
{
    write_to_file();
    while(scanf("%d" , &n))
    {
        int cnt = 0;
        for(int i = 0 ; i < n ; ++i)
            scanf(" %s" , s[i]);
        for(int i = 0 ; i < n ; ++i)
            for(int j = 0 ; j < n ; ++j)
                if(vis[i][j] != v && s[i][j] == '1')
                {
                    ++cnt;
                    DFS(i , j);
                }
        printf("Image number %d contains %d war eagles.\n" ,v , cnt);
        ++v;
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
                             ▂▃▄▅▆▇█▓▒░Ahmed_Salah(Screaming Eagle)░▒▓█▇▆▅▄▃    */
