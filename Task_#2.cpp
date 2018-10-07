#include <stdio.h>

int main()
{
    int a;
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    scanf("%i",&a);
    int result;
    if (a==0) {result = 1;}
    if (a>0) {result= a*(a+1)/2;}
    if (a<0){result= (2-a)*(a+1)/2;}
    printf("%ld",result);
    return 0;
}