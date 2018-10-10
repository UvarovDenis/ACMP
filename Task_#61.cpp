#include <iostream>
using namespace std;
int main()
{
    int a, b;
    int score1 = 0;
    int score2 = 0;
    string ans = "DRAW";
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    for (int i=0; i<4; i++)
    {
        cin >> a >> b;
        score1 += a;
        score2 += b;
    }
    if (score1>score2) {ans = "1";}
    if (score1<score2) {ans = "2";}
    cout << ans;
    return 0;
}
