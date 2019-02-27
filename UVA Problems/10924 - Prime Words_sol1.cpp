using namespace std ;
#include "iostream"
#include "stdio.h"
#include "algorithm"
#include "cstring"
#include "cmath"
#include "set"
#include "vector"
#include "iomanip"
#include "stack"
#include "cctype"
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
void watchArr(int ARRSIZE,int AAA[])
{
    printf("Arrays Values is\n");
    for(int i=0; i<ARRSIZE; ++i)
        cout<<AAA[i]<<"\n";
    printf("\n");
}
void SpeedIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
}
void write_to_file()
{
    freopen("output.txt","w",stdout);
}
bool isVowel(char c)
{
    if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u')
        return true ;
    else
        return false ;
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
lld visited[AKA], cm[AKA];
void sieve()
{
    for(int i=2; i<=AKA; ++i)
    {
        if(visited[i])
            continue;
        prime.push_back(i);
        for(lld j=1LL*i*i; j<=AKA; j+=i)
            visited[j]=1;
    }
}
int main()
{
    //write_to_file();
    CFT;
    while(T_ISA)
    {
        string s;
        sieve();
        while(cin>>s)
        {
            int Size=s.length();
            lld ans=0;
            for(int i=0; i<Size; ++i)
                if(s[i]>='a' && s[i]<='z')
                    ans+=s[i]-96;
                else
                    ans+=s[i]-38;
            int low=(lower_bound(prime.begin(),prime.end(),ans)-prime.begin());
            if(prime[low]==ans || ans==1)
            printf("It is a prime word.\n");
            else
            printf("It is not a prime word.\n");
        }
    }
    AlhamdwLeAllah;
}
/*
 while(t--)
        {
            int n=SD();
            cout<<(upper_bound(cm,cm+S,n))-cm<<"\n";
        }

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
