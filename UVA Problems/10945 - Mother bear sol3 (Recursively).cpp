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
#define watchSTL(container) {\
                                cout<<(#container)<<" values =  ";\
                                for(auto _E:container)cout<<_E<<" ";\
                                printf("\n");\
                            }
vector<int>divs;
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
char s[AKA], temp[AKA];
int  Size;
bool ispalind(int i, int j)
{
    if(temp[i]!=temp[j])
        return 0;
    if(i>=Size/2)
        return 1;
    bool ans=ispalind(i+1, j-1);
    return ans;
}
int main()
{
    CFT ;
    while(T_ISA)
    {
        //freopen("out.txt" , "w" , stdout);
        while(gets(s) && strcmp(s, "DONE"))
        {
            memset(temp, '\0', sizeof temp);
            Size=strlen(s);
            for(int i=0,j=0; i<Size; ++i)
                if(isalpha(s[i]))
                    s[i]=(char)tolower(s[i]), temp[j++]=s[i];
            Size=strlen(temp);
            puts((ispalind(0,Size-1)) ? "You won't be eaten!" : "Uh oh..");
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
