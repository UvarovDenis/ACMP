#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int a1, b1, r1;
    int a2, b2, r2;
    int d, min, max;
    string ans = "NO";
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> a1 >> b1 >> r1;
    cin >> a2 >> b2 >> r2;
    
    d = (a1-a2) * (a1-a2) + (b1-b2) * (b1-b2);
    max = (r1 + r2) * (r1 + r2);
    min = (r1 - r2) * (r1 - r2);
    if (d >= min && d<=max)
    {
        ans = "YES";
    }
    cout << ans;
    return 0;
}
