#include <stdio.h>

int main()
{
    int a;
    unsigned long result;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%i",&a);
    result = a/10;
    result *= result+1;
    if (result==0) printf("25");
    else printf("%ld25",result);
    return 0;
}