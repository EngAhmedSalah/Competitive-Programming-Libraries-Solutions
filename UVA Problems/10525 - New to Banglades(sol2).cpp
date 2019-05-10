#include<bits/stdc++.h>
using namespace std;
const int OO = 1e9;
typedef pair<int , int > ii;
typedef pair<ii , int> ii_i;
vector<ii_i> adj[1000];
int dis[1000] , tmm[1000] , n , m;
void dijkestra(int &s , int &dest)
{
    for(int i = 0 ; i <= 200 ; ++i)
        tmm[i] = dis[i] = OO;
    priority_queue<ii_i , vector<ii_i> , greater<ii_i> > q;
    q.push({{0 , 0} , s});
    dis[s] = 0;
    tmm[s] = 0;
    while(!q.empty())
    {
        int u = q.top().second , t = q.top().first.first , d = q.top().first.second;
        q.pop();
        if(tmm[u] < t && dis[u] < d)
            continue;
        for(auto v : adj[u])
        {
            int to = v.second , cotime = v.first.first , codis = v.first.second;
            if(tmm[u] + cotime < tmm[to])
            {
                tmm[to] = tmm[u] + cotime;
                dis[to] = dis[u] + codis;
                q.push({{tmm[to] , dis[to]} , to});
            }
            else if(tmm[u] + cotime == tmm[to])
            {
                if(dis[u] + codis < dis[to])
                {
                    tmm[to] = tmm[u] + cotime;
                    dis[to] = dis[u] + codis;
                    q.push({{tmm[to], dis[to]}, to});
                }
            }
        }
    }
}
int main()
{
    int t;
    scanf("%d" , &t);
    while(t--)
    {
        scanf("%d %d" , &n , &m);
        for(int i = 0 ; i < m ; ++i)
        {
            int a , b , t , l;
            scanf("%d %d %d %d" , &a , &b , &t , &l);
            adj[a].push_back({{t , l} , b});
            adj[b].push_back({{t , l} , a});
        }
        int q;
        scanf("%d" , &q);
        while(q--)
        {
            int s , dest;
            scanf("%d %d" , &s , &dest);
            dijkestra(s , dest);
            if(tmm[dest] == OO && dis[dest] == OO)
                puts("No Path.");
            else
                printf("Distance and time to reach destination is %d & %d.\n" , dis[dest] , tmm[dest]);
        }
        for(int i = 0 ; i <= 200 ; ++i)
            adj[i].clear();
        if(t)
            puts("");
    }
}
