#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int i;
    int a, b, cow = 0,bull = 0;
    int first[4], second[4];
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> a >> b;
    for (i=3; i>=0; i--)
    {
        first[i] = a % 10;
        second[i] = b % 10;
        a /= 10;
        b /= 10;
    }
    for (i = 0; i < 4; i++)
    {
        if (first[i] == second[i]) {bull++;}
        for (int j = 0; j < 4; j++)
        {
            if (second[j] == first[i])
            {
                cow++;
            }
        }
    }
    cout << bull << " " << cow-bull;
    return 0;
}
