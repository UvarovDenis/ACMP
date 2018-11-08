#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count, types, numer;
    cin >> count;
    int *mas = new int[count];
    for (int i = 0; i < count; i++)
    {
        cin >> mas[i];
    }
    cin >> types;
    for (int i = 0; i < types; i++)
    {
        cin >> numer;
        mas[numer-1]-=1;
    }
    for (int i = 0; i < count; i++)
    {
        if(mas[i] < 0) { cout << "yes" << "\n"; }
        else { cout << "no" << "\n"; }
    }
    delete [] mas;
    return 0;
}
