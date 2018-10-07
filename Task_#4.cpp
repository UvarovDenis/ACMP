#include <stdio.h>

int main()
{
    int a;
    int result;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%i",&a);
    result = a*100+90+ 9-a;
    printf("%i",result);
    return 0;
}