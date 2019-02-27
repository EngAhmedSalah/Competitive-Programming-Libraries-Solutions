#include "bits/stdc++.h"
using namespace std;
#define neigbours(u, e, v) for(int e = head[u], v ; v = to[e], ~e ; e = nxt[e]) //v = to[e], ~e  will assign to[e] to v in each loop instead of opening {}
const int N = 1e4 + 5, M = 4e4 + 5;
/*
int ne, head[N], nxt[M], to[M],  visited[N], n, m, a, b;
void addEdge(int FROM, int TO)
{
    to[ne] = TO;
    nxt[ne]=head[FROM];
    head[FROM]=ne++;
}
void addBiEdge(int a,int b)
{
    addEdge(a,b);
    addEdge(b,a);
}
void initialize_head_with_mins1()
{
    memset(head, -1, n*sizeof head[0]);
    ne = 0;
}

int DFS(int u)
{
    if(visited[u]) return  0;
    visited[u]=1;
    int ans = 1;
    neigbours(u, e, v)
    ans+=DFS(v);
    return ans;
}
int main()
{
    scanf("%d%d",&n,&m);
    initialize_head_with_mins1();
    while(m--)
    {
        scanf("%d%d",&a,&b);
        addBiEdge(--a, --b);
    }
    puts(ne>>1 != n-1 || DFS(0) != n ? "NO" : "YES");

}
*/




int n, m;
queue<int> q;
vector<bool> visited(n), d(n), p(n);    //p(n) which stores for each vertex the vertex from which we reached it
vector<vector<int>> adj;                //d(n) which stores the current layer that I have visit now
int BFS(int u)
{
    int ans=1;
    q.push(u);
    visited[u] = true;
    p[u] = -1;
    while (!q.empty())
    {
        int v = q.front();
        q.pop();
        for (int u : adj[v])
        {
            if (!visited[u])
            {
                visited[u] = true;
                q.push(u);
                ++ans;
                d[u] = d[v] + 1;
                p[u] = v;
            }
        }
    }
    return ans;
}



int main()
{
    scanf("%d%d",&n,&m);
    while(m--)
    {
        int a , b;
        scanf("%d%d",&a,&b);
        adj[--a].push_back(--b);
    }
    //puts(BFS(0) != n ? "NO" : "YES");
    printf("%d" , BFS(0));

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
                           ▄▄▄▄▄▄█▓▒░Ahmed_Salah(Bit_Hach_Tech)░▒▓█▄▄▄▄▄▄
                           ▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄▄
*/
