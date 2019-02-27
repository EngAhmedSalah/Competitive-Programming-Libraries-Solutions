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
#define el '\n'
#define watch(x) cout << (#x) << " is " << (x) << endl
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
int idx [AKA], a [AKA], b [AKA], arr[AKA], fr[AKA], cm [AKA];
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
    //write_to_file();
    CFT;
    while(T_ISA)
    {
        int t=SD();
        while(t--)
        {
            bool flag=true;
            char s1[101] , s2[101];
            scanf("%s %s",&s1,&s2);
            int Size1=strlen(s1),Size2=strlen(s2);
            if(Size1!=Size2)
                printf("No\n");
            else
            {
                for(int i=0; i<Size1; ++i)
                    if(!isVowel(s1[i]) && !isVowel(s2[i]) && s1[i]!=s2[i])
                        flag=false;
                    else if((isVowel(s1[i]) && !isVowel(s2[i])) || (!isVowel(s1[i]) && isVowel(s2[i])))
                        flag=false;
                (flag)?cout<<"Yes\n" : cout<<"No\n";
            }
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
