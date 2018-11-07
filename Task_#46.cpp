#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string e = ".71828182845904523536028750";
    int count;
    cin >> count;
    
    if (count == 0)
    {
        cout << "3";
        return 0;
    }
    cout << "2.";
    for (int i = 1; i<count; i++) { cout << e[i]; }
    if (e[count+1]>='5')
    {
        char a = e[count] + 1;
        cout << a;
    }
    else
    { cout << e[count]; }
    return 0;
}
