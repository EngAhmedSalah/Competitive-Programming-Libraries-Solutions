using namespace std ;
#include "iostream"
#include "stdio.h"
#include "cstring"
#include "cmath"
#include "iomanip"
#include "cctype"
#include "algorithm"
#include "vector"
#include "set"
#include "stack"
#include "queue"
#include "deque"
#include "map"
#include "list"
#include "bitset"
typedef long long lld;
typedef vector<int> vi;
typedef pair<int,int> pii;
typedef vector<pii> vpii;
#define _CRT_SECURE_NO_DEPRECATE
#define MAX 200
#define CFT int ACCEPTED = 1 ;
#define MYT int ACCEPTED = 1000 ;
#define T_ISA ACCEPTED--
#define AlhamdwLeAllah return 0
#define el '\n'
#define watch(x) cout << (#x) << " is " << (x) << endl
#define all(c) c.begin(), c.end()
#define present(container, element) (container.find(element) != container.end())        //for set & map
#define vpresent(container, element) (find(all(container),element) != container.end()) //for vector
#define write_to_file() freopen("output.txt","w",stdout);
#define read_from_file() freopen("input.txt","r",stdin);
#define watchSTL(container) {\
                                cout<<(#container)<<" values =  ";\
                                for(auto _E:container)cout<<_E<<" ";\
                                printf("\n");\
                            }
#define speed               {\
                                ios_base::sync_with_stdio(0);\
                                cin.tie(0);\
                                 cout.tie(0);\
                            }
void watchset_e(set<int>SET, int N)
{
    set<int>::iterator ITERATOR=SET.begin();
    advance(ITERATOR,N);
    printf("Element in %dth = %d \n",N,*ITERATOR);
}
int SD()
{
    int x;
    scanf("%d",&x);
    return x;
}
lld SLL()
{
    lld x;
    scanf("%lld",&x);
    return x;
}
char SC()
{
    char x;
    scanf("%c",&x);
    return x;
}
const int AKA = 1e6 + 5 ;
vector<int>prime;
lld notPrime[AKA];
void seive()
{
    notPrime[0] = notPrime[1]=1;
    for(int i=2; i<=AKA-5; ++i)
    {
        if(!notPrime[i])
            prime.push_back(i);
        for(lld j=1LL*i*i; j<=AKA-5; j+=i)
            notPrime[j]=1;
    }
}
int arr[AKA];
int main()
{
    //read_from_file();
    //write_to_file();
    CFT ;
    speed;
    while(T_ISA)
    {
        int n ;
        while(scanf("%d",&n) && n!=0)
        {
            deque<int>d;
            int  i, v;
            for(i=1; i<=n; ++i)
                d.push_back(i);
            i=1;
            (n==1)?printf("Discarded cards:") : printf("Discarded cards: ");
            while(d.size()!=1)
            {
                if(i%2)
                {
                    (d.size()!=2)? printf("%d, ",d.front()): printf("%d",d.front());
                    d.pop_front();
                }
                else
                {
                    d.push_back(d.front());
                    d.pop_front();
                }
                ++i;
            }
            printf("\nRemaining card: %d\n",d.front());
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
