#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int year;
    string ans = "13/09/";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
    {
        ans = "12/09/";
    }
    string y = to_string(year);
    while (y.length() < 4)
    { y = "0" + y; }
    cout << ans << y;
    return 0;
}
