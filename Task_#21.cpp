#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    int min, max;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> a >> b >> c;
    min = a;
    max = a;
    if (min>b) {min = b;}
    if (max<b) {max = b;}
    if (min>c) {min = c;}
    if (max<c) {max = c;}
    cout << max-min;
    return 0;
}