#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int number;
    int count = 0;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    cin >> number;
    while (number >0)
    {
        if (number%2==1) {count ++;}
        number/=2;
    }
    cout << count;
    return 0;
}
