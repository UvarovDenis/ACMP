#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count, size;
    int max = 437;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> size;
        if (size<=max)
        {
            cout << "Crash " << i+1;
            return 0;
        }
    }
    cout << "No crash";
    return 0;
}
