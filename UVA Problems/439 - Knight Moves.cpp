#include <bits/stdc++.h>
using namespace std;
int dr[8] = {-1 , -1 , 1 , 1 , 2 , 2 , -2 , -2};
int dc[8] = {2 , -2 , 2 , -2 , 1 , -1 , 1 , -1};
const int AKA = 1e6 + 6;
int vis[100][100] , dis[100][100];
int BFS(int r , int c , int tr , int tc)
{
    queue<pair<int , int> > q;
    q.push({r , c});
    dis[r][c] = 0;
    vis[r][c] = 1;
    while(!q.empty())
    {
        int r = q.front().first , c = q.front().second;
        q.pop();
        for(int i = 0 ; i < 8 ; ++i)
        {
            int rr = r + dr[i] , cc = c + dc[i];
            if(!vis[rr][cc] && rr >= 0 && rr < 8 && cc >= 0 && cc < 8)
            {
                dis[rr][cc] = dis[r][c] + 1;
                vis[rr][cc] = 1;
                q.push({rr , cc});
            }
            if(rr == tr && cc == tc)
                return dis[rr][cc];
        }
    }

}
int main()
{
    char s1[3] , s2[3];
    while(cin>>s1>>s2)
    {
        for(int i = 0 ; i < 20 ; ++i)
        {
            memset(vis[i] , 0 , sizeof vis[i]);
            memset(dis[i] , 0 , sizeof dis[i]);
        }
        printf("To get from %s to %s takes %d knight moves.\n" ,s1 , s2 ,  BFS(s1[0] - 'a' , s1[1] - '1' , s2[0] - 'a' , s2[1] - '1'));
    }
}
