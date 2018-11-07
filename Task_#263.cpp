#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count, start, finish;
    int front, back;
    cin >> count >> start >>finish;
    if (start > finish)
    {
        front = start;
        start = finish;
        finish = front;
    }
    front = finish - start - 1;
    back = count + start - finish - 1;
    if (back > front)
    {
        cout << front;
    }
    else
    {
        cout << back;
    }
    return 0;
}
