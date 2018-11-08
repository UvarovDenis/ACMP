#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count, value, max = 0;
    int *mas;
    cin >> count;
    mas = new int[count];
    for (int i = 0; i<count; i++)
    {
        cin >> mas[i];
    }
    for (int i = 0; i<count; i++)
    {
        value = mas[i];
        value += mas[(count+i+1)%count];
        value += mas[(count+i-1)%count];
        if (max < value) {max = value;}
    }
    cout << max;
    delete [] mas;
    return 0;
}
