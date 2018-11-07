#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count;
    int age, sex;
    int max = -1, num = -1;
    cin >> count;
    for (int i = 0; i < count; i++)
    {
        cin >> age >> sex;
        if (sex == 1 && max < age)
        {
            max = age;
            num = i+1;
        }
    }
    cout << num;
    return 0;
}
