#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    int startH, startM;
    int roadH, roadM;
    int minutes, hours;
    string h = "", m = "";
    scanf("%d:%d", &startH, &startM);
    scanf("%d %d", &roadH, &roadM);
    minutes = startM + roadM;
    hours = (startH + roadH + minutes / 60) % 24;
    minutes = minutes % 60;
    if (minutes < 10) {m = "0";}
    m += to_string(minutes);
    if (hours < 10) {h = "0";}
    h += to_string(hours);
    cout << h << ":" << m;
    return 0;
}
