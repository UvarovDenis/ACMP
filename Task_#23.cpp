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
    for (int i = 1; i<= number; i++)
    {
        if (number % i== 0) {count+=i;}
    }
    cout << count;
    return 0;
}
