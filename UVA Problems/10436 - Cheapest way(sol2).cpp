#include <bits/stdc++.h>
using namespace std;
#define watch1(x) cout<<(#x)<<" is " <<(x)<<"\n"
#define watch2(x , y) cout<<(#x)<<" is " <<(x)<<" "<<(#y)<<" is " <<(y)<<"\n"
#define watch3(x , y , z) cout<<(#x)<<" is " <<(x)<<" "<<(#y)<<" is " <<(y)<<"  "<<(#z)<<" is " <<(z)<<"\n"
int SD(){int x; scanf("%d" , &x); return x;}
int dr[8] = {-1 , -1 , 1 , 1 , 2 , 2 , -2 , -2};
int dc[8] = {2 , -2 , 2 , -2 , 1 , -1 , 1 , -1};
const int AKA = 1e6 + 6 , OO = 1e9;
map<string , int> dis;
map<string , string> p;
map<string , vector<pair<int , string> > > adj;
map<string , int> node_cost;
vector<string> node;
typedef pair<int , string> is;
void dijkestra(string &s1)
{
    for(auto x : node)
        dis[x] = OO;
    priority_queue<is , vector<is> , greater<is> > q;
    q.push({node_cost[s1] , s1});
    p[s1] = "-1";
    dis[s1] = node_cost[s1];
    while(!q.empty())
    {
        string u = q.top().second ; int d = q.top().first;
        q.pop();
        if(dis[u] < d)
            continue;
        for(auto v : adj[u])
        {
            string to = v.second; int cost = v.first;
            //watch3(u , to , dis[u] + cost + node_cost[to]);
            if(dis[u] + cost + node_cost[to] < dis[to])
            {
                dis[to] = dis[u] + cost + node_cost[to];
                q.push({dis[to] , to});
                p[to] = u;
            }
        }
    }
}
vector<string>path;
void print_path(string s2)
{
    if(s2 == "-1")
        return;
    print_path(p[s2]);
    path.push_back(s2);
}
int main()
{

    freopen("input.txt" , "r" , stdin);
    freopen("output.txt" , "w" , stdout);
    int t;
    cin>>t;
    for(int i = 1 ; i <= t ; ++i)
    {
        if(i > 1)
            puts("");
        int n , co;
        cin>>n;
        string s1 , s2;
        for(int j = 0 ; j < n ; j++)
        {
            cin>>s1>>co;
            node_cost[s1] = co;
            node.push_back(s1);
        }
        cin>>n;
        for(int j = 0 ; j < n ; ++j)
        {
            cin>>s1>>s2>>co;
            adj[s1].push_back({co*2 , s2});
            adj[s2].push_back({co*2 , s1});
        }
        int q;
        cin>>q;
        cout<<"Map #"<<i<<"\n";
        for(int j = 1 ; j <= q ; ++j)
        {
            int pass;
            cin>>s1>>s2>>pass;
            dijkestra(s1);
            double cost = (dis[s2] + dis[s2] * 0.1) / pass;
            print_path(s2);
            cout<<"Query #"<<j<<"\n";
            for(int i = 0 ; i < path.size() ; ++i)
                if(i != path.size() - 1)
                    cout<<path[i]<<" ";
                else
                    cout<<path[i];
            puts("");
            cout<<fixed<<setprecision(2)<<"Each passenger has to pay : "<<cost<<" taka\n";
            path.clear();
        }
        adj.clear();
        node_cost.clear();
        node.clear();
        p.clear();
    }
}
