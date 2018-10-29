#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    string a;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> a;
    if (a.length()==5
        && a[0]<='H' && a[0]>='A'
        && a[1]<='8' && a[1]>='1'
        && a[2] == '-'
        && a[3]<='H' && a[3]>='A'
        && a[4]<='8' && a[4]>='1')
    {
        int w = a[0]-a[3];
        int h = a[1]-a[4];
        if (w<0) {w=-w;}
        if (h<0) {h=-h;}
        if ((w==2 && h==1) || (w==1 && h==2))
        { cout << "YES"; }
        else
        { cout << "NO"; }
    }
    else
    {
        cout << "ERROR";
    }
    return 0;
}
