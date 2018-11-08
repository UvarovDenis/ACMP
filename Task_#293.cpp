#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count, variable;
    int index = 0 , max = 0;
    cin >> count;
    int* array = new int[count];
    for (int i = 0; i < count; i++)
    {
        cin >> variable;
        array[i] = variable;
    }
    for (int i = 0; i < count; i++)
    {
        cin >> variable;
        if (variable * array[i] > max)
        {
            max = variable * array[i];
            index = i;
        }
    }
    delete[] array;
    cout << index + 1;
    return 0;
}
