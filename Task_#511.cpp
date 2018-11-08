#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count;
    int max = 12 * 60 / 5 + 1;
    cin >> count;
    if (count > max)
    {
        cout << "NO";
    }
    else
    {
        int value = (count - 1) * 5;
        cout << value/60 << " " << value % 60;
    }
    return 0;
}
