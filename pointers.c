#include<stdio.h>
#include<conio.h>
int main()
{
    int a = 10;
    int b = 20;
    int *c,*d;
    c = &a;
    d = &b;
    printf("hello world");
    printf("the value of a is :%d\n",*c);
    printf("the address of a is :%d\n",c);
    printf("the value of b is :%d\n",*d);
    printf("The address of b is :%d\n",d);
    *c = *c + *d;
    *d = *c - *d;
    *c = *c - *d;
    printf("%d %d",*c , *d);
    return 0 ;
}