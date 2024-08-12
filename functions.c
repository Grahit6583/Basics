#include <stdio.h>
#include <conio.h>
void add(); // without argument
void sub(int , int); // with arguments
float mul();
char stch();
void fun(int,int); // call by value
void refun(int* , int*); // call by reference
int divide(); //no argu with return type
int swap(int*,int*);
int main()
{
    int x = 45 , y = 65 , s;
    //add();
    //sub(7,6);
    //mul();
    char h;
    h = stch();
    printf("%c",h);
    // fun(x,y);
    // printf("x = %d\ty = %d",x,y); // changed values does not reflect here
    // refun(&x,&y);
    // printf("x = %d\ty = %d",x,y); // changed value reflects here
    // s = divide();
    // printf("ans is =  %d",s);
    // swap(&x,&y);
    // printf("x = %d\ty = %d",x,y);
    return 0;
}
void add()
{
    int a,b,c=0;
    printf("Enter two numbers :");
    scanf("%d %d",&a,&b);
    c = a+b;
    printf("sum = %d\n",c);
}

void sub(int x ,int y)
{
    int s=0;
    s = x - y;
    printf("sub is = %d",s);
}

float mul()
{
    int a,b;
    printf("enter the numbers :");
    scanf("%d %d",&a,&b);
    printf("mul is = %d",a*b);
}

char stch()
{
    char ch;
    printf("enter the character\n");
    scanf("%c",&ch);
    return ch;
}

void fun(int x , int y)
{
    x = 7;
    y = 8;
    printf("x = %d\ty = %d\n",x,y);
}

void refun(int *x , int *y)
{
    *x = 7;
    *y = 8;
    printf("x = %d\ty = %d\n",x,y);
    printf("x = %d\ty = %d\n",*x,*y);
}

int divide()
{
    int a  , b ;
    printf("Enter the numbers");
    scanf("%d %d",&a,&b);
    return a/b;
}

int swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}