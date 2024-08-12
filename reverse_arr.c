#include<stdio.h>
int reverse_arr(int [],int,int);
int main()
{
    int n,k,i;
    printf("Enter the no. of elements in array:\n");
    scanf("%d",&n);
    int  a[n];
    printf("Enter the elements in array :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\nEnter element to reverse array :\n");
    scanf("%d",&k);
    reverse_arr(a,n,k);
    printf("\nreverse array\n");
    for (i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
}
int reverse_arr(int a[],int n,int k)
{
    int temp,start = 0,end = n-1,i,arr1[n],arr2[n],k1=0,k2=0,j=0;
    for(i = 0; i < n; i++)
    {
        if(i < k)
            arr1[k1++] = a[i];
        else
            arr2[k2++] = a[i];
    }
    for(i=0;i<k1;i++)
    {
        printf("%d\t",arr1[i]);
    }
    printf("\n");
    for(i=0;i<k2;i++)
    {
        printf("%d\t",arr2[i]);
    }
    for(i = 0; i < k1/2; i++)
        {
            temp = arr1[i];
            arr1[i] = arr1[k1-i-1];
            arr1[k1-i-1] = temp;
        }

    for(i = 0; i < k2/2; i++)
        {
            temp = arr2[i];
            arr2[i] = arr2[k2-i-1];
            arr2[k2-i-1] = temp;
        }
    i=0,n=0;
    while(i<k1)
    {
        a[n++] = arr1[i++];
    }
    while(j<k2)
    {
        a[n++] = arr2[j++];
    }
}