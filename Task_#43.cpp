#include <iostream>
using namespace std;
int main()
{
    string str;
    int max = 0;
    int count = 0;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> str;
    for (int i=0; i<str.length(); i++)
    {
        if (str[i]=='1'){count= 0;}
        else
        {
            count+=1;
            if (max<count){max= count;}
        }
    }
    cout << max;
    return 0;
}