#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int size, count, variable;
    int start, end;
    int i, j;
    cin >> size;
    int* array = new int[size];
    for (i = 0; i < size; i++)
    {
        cin >> variable;
        array[i] = variable;
    }
    cin >> count;
    for (i = 0; i < count; i++)
    {
        cin >> start >> end;
        for (j = start; j <= end; j++)
        {
            cout << array[j-1] << " ";
        }
        cout << "\n";
    }
    delete[] array;
    return 0;
}
