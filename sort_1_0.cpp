#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
// vector<int> printarray(vector<int> &arr, int);
// vector<vector<int>> sort_1_0(vector<int> &arr, int);
vector<int> sorting(vector<int> &arr , int n)
{
    int i=0,j=n-1;
    while(i<j)
    {
        while(arr[i]==0 && i<j)
        {
            i++;
        }
        while(arr[j]== 1 && i<j)
        {
            j--;
        }
        if(i<j)
        {
            swap(arr[i],arr[j]);
            i++;
            j--;
        }
    }
    return arr;
}
int main()
{
    vector <int> arr;
    int n,a,i;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the data in the array : \n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    sorting(arr,n);
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;
}
