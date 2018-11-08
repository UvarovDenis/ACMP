#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int value, counter = 0;
    int max = -10001, min = 10001;
    while (true)
    {
        if (scanf("%d", &value) != 1) { break; }
        counter += 1;
        if (counter % 2 == 1)
        {
            if (value < min) { min = value; }
        }
        else
        {
            if (value > max) { max = value; }
        }
    }
    cout << max + min;
    return 0;
}
