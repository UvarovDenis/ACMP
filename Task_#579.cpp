#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count, value;
    string a = "", b = "";
    int ca = 0, cb = 0;
    int va = 0, vb = 0;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> value;
        if (value > 0)
        {
            va += value;
            ca += 1;
            a += to_string(i + 1) + " ";
        }
        else
        {
            vb -= value;
            cb += 1;
            b += to_string(i + 1) + " ";
        }
    }
    if (va > vb)
    { cout << ca << "\n" << a; }
    else { cout << cb << "\n" << b; }
    return 0;
}
