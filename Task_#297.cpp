#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string input;
    int count = 0;
    cin >> input;
    for (int i = 0; i< input.length(); i++)
    {
        if (input[i] == '6' || input[i] == '9' || input[i] == '0')
        {
            count += 1;
        }
        if (input[i] == '8')
        {
            count += 2;
        }
    }
    cout << count;
    return 0;
}
