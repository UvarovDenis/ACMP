#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int a, b, c;
    string ans = "";
    bool flag = false;
    cin >> a >> b >> c;
    if (a != 0)
    {
        ans += to_string(a);
        flag = true;
    }
    if (b!=0)
    {
        if (b > 0 && flag) {ans += "+";}
        if (b != 1 && b != -1) {ans += to_string(b);}
        if (b == -1) { ans += "-";}
        ans += "x";
        flag = true;
    }
    if (c!=0)
    {
        if (c > 0 && flag) {ans += "+";}
        if (c != 1 && c!= -1) {ans += to_string(c);}
        if (c == -1) { ans += "-";}
        ans += "y";
        flag = true;
    }
    if (!flag)
    {
        ans = "0";
    }
    cout << ans;
    return 0;
}
