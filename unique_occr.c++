#include<iostream>
using namespace std;
int unique_id(int [],int);
int main()
{
    int n,i,ans;
    cout<<"Enter the size : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the data in array \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ans = unique_id(arr,n);
    cout<<"unique number is : "<<ans;
}
int unique_id(int arr[],int n)
{
    int i,ans=0,sec[n],k=0;
    for(i=0;i<n;i++)
    {
        ans = ans^arr[i];
        sec[i] = ans;
    }
    return ans;
}