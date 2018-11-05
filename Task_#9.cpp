#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    int count;
    int sum = 0;
    int multiplication = 1;
    int i;
    string first, second, third;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> count;
    int array[101];
    for (i=0; i<count; i++)
    {
        cin >> array[i];
        if (array[i]>0) {sum += array[i];}
    }
    int minIndex = 0, maxIndex = 0;
    for (i=1; i<count; i++)
    {
        if (array[i]>array[maxIndex])
        {
            maxIndex = i;
        }
        if (array[i]<array[minIndex])
        {
            minIndex = i;
        }
    }
    if (maxIndex<minIndex)
    {
        i= maxIndex;
        maxIndex = minIndex;
        minIndex = i;
    }
    if (maxIndex-minIndex>1){
        for (i=minIndex + 1; i<maxIndex; i++)
        {
        multiplication*= array[i];
        }
    }
    cout << sum << " " << multiplication;
    return 0;
}
