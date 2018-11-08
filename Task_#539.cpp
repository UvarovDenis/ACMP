#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count;
    cin >> count;
    if (count % 2 == 0)
    { cout << count / 2; }
    else
    {
        if (count == 1) {count -= 1;}
        cout << count;
    }
    return 0;
}
