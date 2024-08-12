#include<stdio.h>
#include<conio.h>
int main()
{
    int a=23456,b=65432,c,remainder = 0,reverse = 0;
    a=a+b;
    b=a-b;
    a=a-b;
    printf("%d %d\n",a,b);
    while(a != 0)
    {
        remainder = a%10;
        reverse = reverse*10 + remainder;
        a = a/10;
    }
    printf("\n%d",reverse);
    return 0;
}