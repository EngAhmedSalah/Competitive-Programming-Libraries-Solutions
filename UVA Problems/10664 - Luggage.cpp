using namespace std;
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
#define loop(i,n) for(int i = 0; i < n; i++)
#define MAX 200
#define CFT int ACCEPTED = 1 ;
#define MYT int ACCEPTED = 1000 ;
#define T_ISA ACCEPTED--
#define AlhamdwLeAllah return 0
int SD(){int x;scanf("%d",&x);return x;}
lld SLL(){lld x;scanf("%lld",&x);return x;}
char SC(){char x;scanf("%c",&x);return x;}
const int AKA = 5e5 + 5 ;
int a[AKA];
int main()
{
    CFT;
    while(T_ISA)
    {
        int t = SD();
        while(t--)
        {
            int  Size=0 , flag = 0;
            char ch ;
            do
            {
                a[Size++]=SD();
                ch = SC();
            }
            while (ch!='\n');
            for(int i = 0 ; i < (1<<Size); ++i)
            {
                int t1 = 0, t2 = 0;
                for(int j = 0 ; j < Size ; ++j)
                    (i & (1 << j)) ? t1+=a[j] : t2+=a[j];
                if(t1 == t2)
                    flag = true;
            }
            puts((flag)? "YES" : "NO");
        }
    }
}
