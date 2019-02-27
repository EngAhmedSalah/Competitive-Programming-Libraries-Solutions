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
int main()
{
    CFT;
    while(T_ISA)
    {
        int c,a,b;
        while(scanf("%d%d",&a,&b) && a && b)
        {
            c=0;
            for(int  x=1; x*x<=b; ++x)
                c+= (x*x)>=a && (x*x)<=b;
            printf("%d\n",c);
        }
    }
    AlhamdwLeAllah;
}
/*
bool isInt(auto x)
{
    if(x==floor(x))
        return true;
    else
        return false;
}
 int counter=0;
    for(int x=1;x<=100000;++x)
        if(isInt(sqrt(x))){
            cout<<x<<'\n';
         ++counter;
        }
        cout<<"kkhhkh:"<<counter;
*/
