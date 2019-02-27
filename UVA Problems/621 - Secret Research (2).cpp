#include "bits/stdc++.h"
using namespace std;
const int AKA = 1e6+6;
char s[AKA];
int SD(){int i; scanf("%d" , &i); return i;}
int main()
{
    int t = SD();
    while(t--)
    {
        scanf("\n%s", &s);
        puts((s[0] == '1' && strlen(s) == 1) || (s[0] == '4' && strlen(s) == 1) || (s[0] == '7' && s[1] == '8' && strlen(s) == 2) ? "+" : (s[strlen(s)-2] == '3' && s[strlen(s) - 1] == '5') ? "-" : (s[0] == '9' && s[strlen(s) - 1] == '4') ? "*" : "?");
    }
}