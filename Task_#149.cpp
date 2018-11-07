#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count;
    int value;
    string ans = "";
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> value;
        ans = to_string(value) + " " + ans;
    }
    cout << ans;
    return 0;
}
