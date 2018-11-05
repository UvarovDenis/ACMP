#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int n,m;
    int d;
    int count;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> count;    
    for (int i = 1; i<= count; i++)
    {
        cin >> n >> m;
        d = 19 * m + (n + 239) * (n + 366) / 2;
        cout << d << "\n";
    }
    return 0;
}
