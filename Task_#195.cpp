#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count, a, b;
    cin >> count >> a >> b;
    cout << 2 * count * a * b;
    return 0;
}
