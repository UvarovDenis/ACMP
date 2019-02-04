#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n, m, k, d;
    cin >> n >> m >> k;
    for (int i=n; i>1;i--)
    {
        d = m;
        m = k-m;
        k = d;
    }
    cout<<m<<" "<<k;
    return 0;
}