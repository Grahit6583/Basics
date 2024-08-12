#include<stdio.h>
#include<conio.h>
int linearsrch(int[],int,int);
int main()
{
    int n,i,k,flag;
    printf("Enter the size array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the data in array\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter item to search : ");
    scanf("%d",&k);
    flag=linearsrch(arr,n,k);
    if(flag==-1)
    {
        printf("Element not found ");
    }
    else
    {
        printf("Element found at index : %d",flag+1);
    }
    return 0;
}
int linearsrch(int arr[],int n,int k)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            return i;
        }
    }
    return -1;
}