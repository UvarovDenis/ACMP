#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int count1, lost1, cost1, value1 = 0;
    int count2, lost2, cost2, value2 = 0;
    int use = 0;
    cin >> count1 >> lost1 >> cost1;
    cin >> count2 >> lost2 >> cost2;
    value1 = count1 / 100 * (100 - lost1);
    value2 = count2 / 100 * (100 - lost2);
    use = value1;
    if (use > value2) {use = value2;}
    value1 = (count1 - use) * cost1;
    value2 = (count2 - use) * cost2;
    cout << value1 + value2;
    return 0;
}
