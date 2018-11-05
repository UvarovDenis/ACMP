#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int ax,ay;
    int bx, by;
    int x1,y1,x2,y2;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    cin >> x1 >> y1 >> x2 >> y2;
    cin >> ax >> ay;
    if (x1 == x2)
    {
        by = ay;
        bx = 2 * x1 - ax;
    }
    else
    {
        bx = ax;
        by = 2 * y1 - ay;
    }
    cout << bx << " " << by;
    return 0;
}
