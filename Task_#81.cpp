#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count, value;
    int max, min;
    cin >> count;
    cin >> value;
    max = value;
    min = value;
    for (int i = 1; i< count; i++)
    {
        cin >> value;
        if (value > max) { max = value; }
        if (value < min) { min = value; }
    }
    cout << min << " " << max;
    return 0;
}
