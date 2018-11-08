#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count, value;
    int maxDuration = 0, duration = 0;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> value;
        if (value > 0)
        {
            duration += 1;
            if (maxDuration < duration) {maxDuration = duration;}
        }
        else
        {
            duration = 0;
        }
    }
    cout << maxDuration;
    return 0;
}
