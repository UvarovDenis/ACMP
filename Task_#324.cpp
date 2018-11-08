#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int value = 0;
    int ch[4];
    string ans = "NO";
    cin >> value;
    for (int i = 0; i < 4; i++)
    {
        ch[i] = value % 10;
        value /= 10;
    }
    if (ch[0] == ch[3] && ch[1] == ch[2])
    {
        ans = "YES";
    }
    cout << ans;
    return 0;
}
