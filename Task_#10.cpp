#include <stdio.h>
#include <iostream>

using namespace std;

bool equation(int a,int b, int c, int d, int x)
{
    long long ans = a * x;
    ans = (ans + b) * x;
    ans = (ans + c) * x;
    ans = ans + d;
    return ans == 0;
}

int main()
{
    int a,b,c,d;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> a >> b >> c >> d;
    for (int i = -100; i<101; i++)
    {
        if (equation(a,b,c,d,i))
        {cout << i<<" ";}
    }
    return 0;
}
