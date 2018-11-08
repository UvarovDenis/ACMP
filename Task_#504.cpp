#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int days;
    cin >> days;
    string mas[3];
    mas[0] = "GCV";
    mas[1] = "VGC";
    mas[2] = "CVG";
    cin >> days;
    cout << mas[days%3];
    return 0;
}
