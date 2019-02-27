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
        int t ;
        cin>>t;
        int arr[t];
       for(int i=0 ; i<t ; ++i)
           cin>>arr[i];
        vector<int> v(arr,arr+t);
        sort (v.begin(), v.end());
        int q ;
        cin>>q;
        for(int i=0 ; i<q ; ++i)
        {
            int value =SD();
            int j = (lower_bound(v.begin(),v.end(),value))-v.begin();
            if(j)
            {
            int idx=0;
            for(int z=0;z<j;++z)
                if(v[z] > v[idx])
                    idx=z;
            cout<<v[idx]<<" ";
            }
            else
                cout<<"X ";
            if(*(upper_bound(v.begin(),v.end(),value)) > v[t-1])
                cout<<"X\n";
                else
                cout<<*(upper_bound(v.begin(),v.end(),value))<<el;
        }
    }
    AlhamdwLeAllah;
}
