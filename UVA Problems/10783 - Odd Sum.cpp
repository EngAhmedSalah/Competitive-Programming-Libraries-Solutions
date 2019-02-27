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
int  arr [AKA], cm [AKA];
int idx [AKA], a [AKA], b [AKA];
bool cpm (int s, int f)
{
    if(b [f] > b[s])
        return true;
    if(b[f] == b[s] && a[f] > a[s])
        return true;
    return false;
}
int main()
{
    CFT;
    while(T_ISA)
    {

        int t = SD();
        for(int j=1;j <=t ; ++j)
        {
            int a = SD(), b =SD() ,sum=0;
            for(int i=a; i<=b ; ++i)
                if(i%2==1)
                    sum+=i;
            printf("Case %d: %d\n",j,sum);
        }
    }
    AlhamdwLeAllah;
}
/*
else
            for(int i=1 ; i<=100 ; ++i)
                if(fr[i] == 2 || fr[i]==3 && sum-fr[i]*i > mx)
                    mx=sum-fr[i]*i;
            printf("%d",mx);
for(int i=1 ; i<=100 ; ++i)
            if(sum-i*fr[])
            else
                flag=true;
        if(flag)
            printf("%d\n",sum);
        else if(sum-idx*2 > sum-fr[idx3]*3)
            printf("%d\n",sum-fr[idx3]*3);
        else
            printf("%d\n",sum-fr[idx2]*2);

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
