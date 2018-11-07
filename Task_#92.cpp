#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int value, boy;
    cin >> value;
    boy = value/6;
    cout << boy << " " << 4*boy << " " << boy;
    return 0;
}
