#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count, inc, value= 0;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> inc;
        value += inc;
    }
    if (value *2 > count)
    {
        cout << count- value;
    }
    else
    {
        cout << value;
    }
    return 0;
}
