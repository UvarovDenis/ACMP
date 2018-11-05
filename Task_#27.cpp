#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int map[100][100];
    int count;
    int h,w;
    int i, j;
    int x1,y1,x2,y2;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    
    cin >> h >> w;
    for (i = 0; i<h; i++)
    {
        for (j = 0; j < w; j++)
        {
            map[i][j] = 0;
        }
    }
    cin >> count;
    for (int num = 0; num<count; num++)
    {
        cin >> x1 >> y1 >> x2 >> y2;
        for (i = x1; i < x2; i++)
        {
            for (j = y1; j < y2; j++)
            {
                map[i][j] = 1;
            }
        }
    }
    count = 0;
    for (i = 0; i<h; i++)
    {
        for (j = 0; j < w; j++)
        {
            if(map[i][j] == 0) count++;
        }
    }
    cout << count;
    return 0;
}
