#include "bits/stdc++.h"
using namespace std;
string s;
int SD(){int i; scanf("%d" , &i); return i;}
int main()
{
    int c = 1;
    while(cin>>s && s!="#")
    {
        if(s == "HELLO")
            printf("Case %d: ENGLISH\n",c++);
        else if(s == "HOLA")
            printf("Case %d: SPANISH\n",c++);
        else if(s == "HALLO")
            printf("Case %d: GERMAN\n",c++);
        else if(s == "BONJOUR")
            printf("Case %d: FRENCH\n",c++);
        else if(s == "CIAO")
            printf("Case %d: ITALIAN\n",c++);
        else if(s == "ZDRAVSTVUJTE")
            printf("Case %d: RUSSIAN\n",c++);
        else
             printf("Case %d: UNKNOWN\n",c++);

    }
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

                         ▂▃▄▅▆▇█▓▒░Ahmed_Salah(ScreamingEagle)░▒▓█▇▆▅▄▃▂
*/
