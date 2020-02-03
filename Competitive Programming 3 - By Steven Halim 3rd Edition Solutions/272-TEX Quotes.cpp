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
void watchArr(int ARRSIZE,vector<char>VECTOR)
{
    printf("Arrays Values is\n");
    for(int i=0; i<ARRSIZE; ++i)
        cout<<VECTOR[i];
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
const int AKA = 6e5 + 5 ;
int idx [AKA], ArrA [AKA], ArrB [AKA], arr[AKA], fr[AKA], cm [AKA];
bool cpm (int s, int f)
{
    if(ArrB [f] < ArrA[s])
        return true;
    if(ArrB[f] == ArrA[s] && ArrA[f] < ArrA[s])
        return true;
    return false;
}
int main()
{
    //write_to_file();
    CFT;
    while(T_ISA)
    {
        int c=0;
        string s;
        while(getline(cin,s))
        {
            int Size=s.length();
            for(int i=0; i<Size; ++i)
                if(s[i]=='"' && c==0)
                {
                    printf("\`\`");
                    ++c;
                }
                else if(s[i]=='"' && c==1)
                {
                    printf("\'\'");
                    --c;
                }
                else
                    printf("%c",s[i]);
            printf("\n");
        }
    }
    AlhamdwLeAllah;
}
/*



                                ───█───▄▀█▀▀█▀▄▄───▐█──────▄▀█▀▀█▀▄▄
                                ──█───▀─▐▌──▐▌─▀▀──▐█─────▀─▐▌──▐▌─█▀
                                ─▐▌──────▀▄▄▀──────▐█▄▄──────▀▄▄▀──▐▌
                                ─█────────────────────▀█────────────█
                                ▐█─────────────────────█▌───────────█
                                ▐█─────────────────────█▌───────────█
                                ─█───────────────█▄───▄█────────────█
                                ─▐▌───────────────▀███▀────────────▐▌
                                ──█──────────▀▄───────────▄▀───────█
                                ───█───────────▀▄▄▄▄▄▄▄▄▄▀────────█

▬▬▬▬▬▬▬ஜ۩۞۩ஜ▬▬▬▬▬▬ > Made By Screaming Eagle AhMeD SaLaH  <▬▬▬▬▬▬▬ஜ۩۞۩ஜ▬▬▬▬▬▬>
*/
