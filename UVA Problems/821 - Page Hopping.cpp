#include <bits/stdc++.h>
using namespace std ;
typedef long long lld;
#define MAX 200
#define CFT int ACCEPTED = 1 ;
#define MYT int ACCEPTED = 1000 ;
#define T_ISA ACCEPTED--
#define AlhamdwLeAllah return 0
#define el '\n'
#define vi vector<int>
#define watch(x) cout << (#x) << " is " << (x) << endl
#define all(c) c.begin(), c.end()
#define present(container, element) (container.find(element) != container.end())        //for set & map
#define vpresent(container, element) (find(all(container),element) != container.end()) //for vector
#define write_to_file() freopen("output.txt","w",stdout);
#define read_from_file() freopen("input.txt","r",stdin);
#define watchSTL(container) {\
                                for(auto _E:container)cout<<_E<<" ";\
                                printf("\n");\
                            }
#define OO  0x3f3f3f3f
#define EPS 1e-9
int SD()
{
    int INTRgr;
    scanf("%d", &INTRgr);
    return INTRgr;
}
char SC()
{
    char ch;
    scanf("%c", &ch);
    return ch;
}
int AdjMatrix[200][200];
void init()
{
    for(int i = 0 ; i <= 200 ; ++i)
    {
        for(int j = 0 ; j <= 200 ; ++j)
            AdjMatrix[i][j] = OO;
        AdjMatrix[i][i] = 0;
    }
}
void floyed()
{
    for(int k = 0 ; k <= 200 ; ++k)
        for(int i = 0 ; i <= 200 ; ++i)
            for(int j = 0 ; j <= 200 ; ++j)
                AdjMatrix[i][j] = min(AdjMatrix[i][j], AdjMatrix[i][k] + AdjMatrix[k][j]);
}
int main()
{
    write_to_file();
    CFT ;
    while(T_ISA)
    {
        int t = 0;
        while(true)
        {
            int a, b, fr[101] = {0}, n = 0, c=0;
            ++t;
            scanf("%d%d", &a, &b);
            if(a == 0 && b == 0)
                break;
            else
            {
                init();
                AdjMatrix[a][b] = 1;
                if(fr[a] == 0 )
                    fr[a] = 1, ++n;
                while(scanf("%d%d", &a, &b) && a!=0 && b!=0)
                {
                    AdjMatrix[a][b] = 1;
                    if(fr[a] == 0 )
                        fr[a] = 1, ++n;
                }
                floyed();
                for (int i = 0; i < 200; i++)
                    for (int j = 0; j < 200; j++)
                        if(AdjMatrix[i][j] != OO) c+=AdjMatrix[i][j];
                printf("Case %d: average length between pages = %.3f clicks\n",t, ((double)c / (n*(n-1))) );
            }
        }
    }
    AlhamdwLeAllah;
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
                            ▂▃▄▅▆▇█▓▒░Ahmed_Salah(Bit_Hach_Tech)░▒▓█▇▆▅▄▃▂
*/
