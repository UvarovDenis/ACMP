#include <stdio.h>
#include <iostream>

using namespace std;
int main()
{
    string max;
    string first, second, third;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> first>>second>>third;
    
    max  = first;
    if (second.length() > max.length())
    {
        max = second;
    }
    if (second.length() == max.length())
    {
        if (second > max) {max = second;}
    }
    
    if (third.length() > max.length())
    {
        max = third;
    }
    if (third.length() == max.length())
    {
        if (third > max) {max = third;}
    }
    cout << max;
    return 0;
}
