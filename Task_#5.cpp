#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    string even = "";
    string odd = "";
    int result = 0;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> n;
    for (int i= 0; i<n; i++)
    {
        int val;
        cin >> val;
        if (val % 2 == 0)
        {
            result+=1;
            even += to_string(val) + " ";
        }
        else
        {
            result-=1;
            odd += to_string(val) + " ";
        }
    }
    even += "\n";
    odd += "\n";
    cout << odd;
    cout << even;
    string answer= "YES";
    if (result < 0) {answer= "NO";}
    cout << answer;
    return 0;
}
