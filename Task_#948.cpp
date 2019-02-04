#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int n, m;
    cin >> n >> m;
    cout<<1+(m-1)/n<<" "<<1+(m-1)%n;
    return 0;
}
