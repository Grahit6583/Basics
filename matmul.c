#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#define N 50
int main()
{
    int a[N][N],b[N][N],c[N][N],i,j,k,m,n,p,q,sum;
    printf("Enter the number of rows and column in first matrix :\n");
    scanf("%d %d",&m,&n);
    printf("Enter the number in first matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the number of rows and column in second matrix :\n");
    scanf("%d %d",&p,&q);
    printf("Enter the number in second matrix :\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("the first matrix is:\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[i][j]);
        }
        printf("\n");
    }
    printf("the second matrix is :\n");
    for(i=0;i<p;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d\t",b[i][j]);
        }
        printf("\n");
    }
    if(n != p)
    {
        printf("invalid input");
    }
    else
    {
        for(i=0;i<m;i++)
        {
            for(j=0;j<q;j++)
            {
                sum =0;
                for(k=0;k<m;k++)
                {
                    sum = sum + (a[i][k]*b[k][j]);
                }
                c[i][j]=sum;
            }
        }
    }
    printf("multiplication is :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<q;j++)
        {
            printf("%d \t",c[i][j]);
        }
        printf("\n");
    }
}