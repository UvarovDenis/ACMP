#include <iostream>
using namespace std;
int main()
{
    int a,b;
    string ans;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> a;
    cin >> b;
    if (a>b) {ans = '>';}
    if (a<b) {ans = '<';}
    if (a==b) {ans = '=';}
    cout << ans;
    return 0;
}