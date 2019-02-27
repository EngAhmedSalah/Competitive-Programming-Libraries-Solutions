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
#define MAX 200
#define CFT int ACCEPTED = 1 ;
#define MYT int ACCEPTED = 1000 ;
#define T_ISA ACCEPTED--
#define AlhamdwLeAllah return 0
void SpeedIO()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
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
const int AKA = 5e5 + 5 ;
int cm [AKA];
int idx [AKA], a [AKA], b [AKA];
bool cpm (int s, int f)
{
    if(b [f] < b[s])
        return true;
    if(b[f] == b[s] && a[f] < a[s])
        return true;
    return false;
}
int main()
{
    CFT;
    while(T_ISA)
    {
        int a;
        while(cin>>a && a!=0)
        {
            while(a/10!=0)
            {
                int sum=0;
                int Size =log10(a)+1;
                for(int i=0; i< Size ; ++i)
                {
                    sum+=a%10;
                    a/=10;
                }
                a=sum;
            }
            printf("%d\n",a);
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
