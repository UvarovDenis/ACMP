#include <iostream>
using namespace std;
int main()
{
    string str = "qwertyuiopasdfghjklzxcvbnmq";
    char pos;
    string ch;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    cin >> ch;
    pos = str.find(ch);
    cout << str[pos+1];
    return 0;
}