#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n, m, k;
    cin >> n >> m >> k;
    if (n==k+m || m==k+n || k==m+n){cout << "YES";}
    else {cout << "NO";}
    return 0;
}