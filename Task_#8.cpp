#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    string result = "NO";
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> a>>b>>c;
    if (a*b==c) {result = "YES";}
    cout << result;
    return 0;
}