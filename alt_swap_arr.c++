#include<iostream>
using namespace std;
void output(int[],int);
void alt_swap(int[],int);
int main()
{
    int n,i;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the data in array :\n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    alt_swap(arr,n);
    output(arr,n);
}
void alt_swap(int arr[], int n)
{
    int i,temp=0;
    for(i=0;i<n;i+=2)
    {
        if(i+1 < n)
        {
            temp = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = temp;
        }
    }
}
void output(int arr[],int n)
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
}