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
int v = 1 , vis[N][N] , n , m;
int a[26] , idx[26] ; char b[26];
bool cmp(int s , int f)
{
    if(a[f] < a[s])
        return true;
    if(a[s] == a[f] && b[s] < b[f])
                return true;
    return false;
}
void DFS(int r , int c , char ch)
{
    if(r < 0 || r >= n || c < 0 || c >= m || vis[r][c] == v || s[r][c] != ch)
        return;
    vis[r][c] = v;
    for(int i = 0 ; i < 4 ; ++i)
        if(vis[r + ddr[i]][c + ddc[i]] != v)
            DFS(r + ddr[i] , c + ddc[i] , ch);
}
int main ()
{
    write_to_file();
    int t = SD();
    while(t--)
    {
        memset(a , 0 , sizeof a);
        memset(b , 0 , sizeof b);
        for(int i = 0 ; i < 26 ; ++i)
            idx[i] = i;
        n = SD() , m = SD();
        for(int i = 0 ; i < n ; ++i)
            scanf(" %s" , s[i]);
        for(int i = 0 ; i < n ; ++i)
            for(int j = 0 ; j < m ; ++j)
                if(vis[i][j] != v)
                {
                    ++a[s[i][j] - 'a'] , b[s[i][j] - 'a'] = s[i][j];
                    DFS(i , j , s[i][j]);
                }
        printf("World #%d\n" ,v);
        sort(idx , idx + 26 , cmp);
        for(int i = 0 ; i < 26 ; ++i)
            if(a[idx[i]]) printf("%c: %d\n" , b[idx[i]] , a[idx[i]]);
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
