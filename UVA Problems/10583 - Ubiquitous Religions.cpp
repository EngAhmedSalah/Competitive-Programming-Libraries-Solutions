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
const int AKA = 1e6 + 6;
int parent[AKA] , sz[AKA] , tree;
void add_set(int u)
{
    parent[u] = u;
    sz[u] = 1;
}
int find_set(int v)
{
    if(v == parent[v])
        return v;
    return parent[v] = find_set(parent[v]);
}
void union_set(int a , int b)
{
    a = find_set(a) , b = find_set(b);
    if(a != b)
    {
        --tree;
        if(sz[a] < sz[b])
            swap(a , b);
    parent[b] = a;
    sz[a] += sz[b];
    }

}
int main()
{
    write_to_file();
    int n , m , Case = 0;
    while(scanf("%d %d" , &n , &m) , !(n == 0 && m == 0))
    {
        tree = n;
        for(int i = 1 ; i <= n ; ++i)
            add_set(i);
        for(int i = 0 ; i < m ; ++i)
        {
            int a = SD() , b = SD();
            union_set(a , b);
        }
        printf("Case %d: %d\n" , ++Case , tree);
    }
}
