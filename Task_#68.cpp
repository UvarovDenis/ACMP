#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count;
    string start;
    string ans = "Yes";
    cin >> start;
    cin >> count;
    if (start != "Home")
    {
        if (count % 2 == 0)
        {
            ans =  "No";
        }
    }
    cout << ans;
    return 0;
}
