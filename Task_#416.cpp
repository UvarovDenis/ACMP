#include <stdio.h>
#include <iostream>

using namespace std;

bool check(char h, int w)
{
    return h>='a' && h<='h' && w>=1 && w<=8;
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    char h, stepH;
    int w, stepW;
    cin >> h >> w;
    
    stepH = h - 2; stepW = w - 1;
    if (check(stepH, stepW))
    { cout << stepH << stepW << "\n"; }
    
    stepH = h - 2; stepW = w + 1;
    if (check(stepH, stepW))
    { cout << stepH << stepW << "\n"; }
    
    stepH = h - 1; stepW = w - 2;
    if (check(stepH, stepW))
    { cout << stepH << stepW << "\n"; }
    
    stepH = h - 1; stepW = w + 2;
    if (check(stepH, stepW))
    { cout << stepH << stepW << "\n"; }
    
    stepH = h + 2; stepW = w - 1;
    if (check(stepH, stepW))
    { cout << stepH << stepW << "\n"; }
    
    stepH = h + 2; stepW = w + 1;
    if (check(stepH, stepW))
    { cout << stepH << stepW << "\n"; }
    
    stepH = h + 1; stepW = w - 2;
    if (check(stepH, stepW))
    { cout << stepH << stepW << "\n"; }
    
    stepH = h + 1; stepW = w + 2;
    if (check(stepH, stepW))
    { cout << stepH << stepW << "\n"; }
    
    return 0;
}
