#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count;
    int ans = 0;
    string input;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> input;
        if (input[0] == input[3]) {ans+=1;}
    }
    cout << ans;
    return 0;
}
