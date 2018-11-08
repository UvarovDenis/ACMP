#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string value;
    int size, max = -1;
    getline(cin, value);
    for (int i = 0; i < value.length(); i++)
    {
        if (value[i] >= '0' && value[i] <= '9')
        {
            size = value[i] - '0';
        }
        else if (value[i] >= 'A' && value[i] <= 'Z')
        {
            size = 10 + value[i] - 'A';
        }
        else
        {
            cout << -1;
            return 0;
        }
        if (size > max) { max = size; }
    }
    if (max == 0) { cout << 2;}
    else {cout << max+1;}
    return 0;
}
