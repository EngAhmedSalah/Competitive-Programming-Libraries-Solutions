#include "bits/stdc++.h"
#include <ext/numeric>
using namespace std;
using namespace __gnu_cxx;
#define watch1(x) cout<<(#x)<<" = "<<(x)<<"\n"
#define watch2(x , y) cout<<(#x)<<" = "<<(x)<<"  "<<(#y)<<" = "<<(y)<<"\n"
#define watch3(x , y , z) cout<<(#x)<<" = "<<(x)<<"  "<<(#y)<<" = "<<(y)<<"  "<<(#z)<<" = "<<(z)<<"\n"
#define write_to_file() freopen("output.txt" , "w" , stdout)
#define read_from_file() freopen("input.txt" , "r" , stdin)
#define GeoOutputFix(VV) cout<<fixed<<setprecision(VV)
#define MAX_V  1e9
#define MIN_V -1e9
template<class T>istream& operator>> (istream& is, complex<T>& p){T value;is >> value, p.real(value), is >> value, p.imag(value);return is;}
typedef long long lld;
typedef pair<lld, lld> dd;
typedef complex<double> point;
#define X real()
#define Y imag()
#define dist(a , b) sqrt(pow(a.X - b.X , 2) + pow(a.Y- b.Y , 2))
#define compare(a , b) (fabs(a.X - b.X) < -1e9 && fabs(a.Y - b.Y) < -1e9)
#define all(c) c.begin() , c.end()
#define MOD (lld)(1e9+7)
#define EPS 1e-9
#define neighbours(u , e , v) for(int e = head[u] , v ; v = to[e] , ~e ; e = nxt[e])
#define mod(x , y) (x % y + y) % y ;
int dr[] = {1 , 1 , 1 , 0 , 0 , -1 , -1 , -1};
int dc[] = {-1 , 0 , 1 , -1 , 1 , -1 , 0 , 1};
int ddr[] = {1 , 0 , 0 , -1};
int ddc[] = {0 , -1 , 1 , 0};
void lower_case(char s[]) {for(int i = 0 ; s[i] ; ++i) s[i] = tolower(s[i]);}
void upper_case(char s[]) {for(int i = 0 ; s[i] ; ++i) s[i] = toupper(s[i]);}
inline int SD(){int i ;scanf("%d", &i);return i;}
inline lld SLL(){lld i;scanf("%lld", &i);return i;}
inline char SC(){char i;scanf(" %c", &i);return i;}
//----------------------------------------------------------------------------------------------------------------------------------
const int OO = 1e9 + 9;
typedef pair<int , int> ii;
typedef pair<int , ii> i_ii;
int cst[1001][1001];
int dis[1001][1001];
int n , m;
int dijkestra(int r , int c , int dr , int dc)
{
    for(int i = 0 ; i < n ; ++i)
        for(int j = 0 ; j < m ; ++j)
            dis[i][j] = OO;
    dis[r][c] = cst[0][0];
    priority_queue<i_ii , vector<i_ii> , greater<i_ii> > q;
    q.push({0 , {r , c} });
    while(!q.empty())
    {
        int ur = q.top().second.first , uc = q.top().second.second , d = q.top().first;
        q.pop();
        if(dis[ur][uc] < d)
            continue;
        if(ur == dr && uc == dc)
            return dis[ur][uc];
        for(int i = 0 ; i < 4 ; ++i)
        {
            int vr = ddr[i] + ur , vc = ddc[i] + uc , cost = cst[vr][vc];
            if(vr >= 0 && vr < n && vc >= 0 && vc < m)
            {
                if(dis[ur][uc] + cost < dis[vr][vc])
                {
                    dis[vr][vc] = dis[ur][uc] + cost;
                    q.push({dis[vr][vc] , {vr , vc}});
                }
            }
        }
    }
}
int main()
{
    //read_from_file();
    //write_to_file();
    int t = SD();
    while(t--)
    {
        n = SD() , m = SD();
        for(int i = 0 ; i < n ; ++i)
            for(int j = 0 ; j < m ; ++j)
                cst[i][j] = SD();
        cout<<dijkestra(0 , 0 , n-1 , m-1)<<"\n";
    }
}
