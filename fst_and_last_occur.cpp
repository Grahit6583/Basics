#include<stdio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
int first_occur(int [] , int , int);
int last_occur(int [], int , int);
pair<int,int> frst_lst(int [] , int , int);
int main()
{
    int i,n,k;
    cout<<"Enter the size of the array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the data in athe array : \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"Enter item to find occurence : ";
    cin>>k;
    cout<<"first occurence : "<<first_occur(arr,n,k)<<endl;
    cout<<"last occurence : "<<last_occur(arr,n,k)<<endl;
    pair<int,int>p = frst_lst(arr,n,k);
    cout<<"final occurence : "<<p.first<<" "<<p.second;
}
int first_occur(int arr[] , int n ,int k)
{
    sort(arr , arr+n);
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            ans = mid;
            e = mid-1;
        }
        else if(arr[mid]>k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return ans+1;
}

int last_occur(int arr[] , int n ,int k)
{
    sort(arr , arr+n);
    int s=0,e=n-1;
    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e)
    {
        if(arr[mid]==k)
        {
            ans = mid;
            s = mid+1;
        }
        else if(arr[mid]>k)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = s+(e-s)/2;
    }
    return ans+1;
}

pair<int , int> frst_lst(int arr[] , int n , int k)
{
    pair<int,int> p;
    p.first = first_occur(arr,n,k);
    p.second = last_occur(arr,n,k);
    return p;
}