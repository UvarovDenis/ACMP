#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string input;
    int max = 1, flour = 1;
    cin >> input;
    for (int i = 0; i < input.length(); i++)
    {
        if (input[i] == '1')
        {
            flour += 1;
            if (max < flour) { max = flour; }
        }
        else
        {
            flour -= 1;
            if (flour == 0)
            {
                flour = 1;
                max += 1;
            }
        }
    }
    cout << max;
    return 0;
}
