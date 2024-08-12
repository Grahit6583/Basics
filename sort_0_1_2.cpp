#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<int> sort_0_1_2(vector<int> &arr , int);
void printarray(vector<int> &arr , int);
int main()
{
    int n,i,a;
    vector<int> arr;
    cout<<"Enter the size of array : ";
    cin>>n;
    cout<<"Enter the data in array : \n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    sort_0_1_2(arr,n);
    printarray(arr,n);
}
void printarray(vector<int> &arr , int n )
{
    int i;
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<endl;
}
vector<int> sort_0_1_2(vector<int> &arr ,int n)
{
    int i,mid,j;
    i=0;
    mid = 0;
    j = n-1;
    while(mid<=j)
    {
        if(arr[mid]== 0 )
        {
            swap(arr[i],arr[mid]);
            i++;
            mid++;
        }
        else if(arr[mid]==1)
        {
            mid++;
        }
        else if(arr[mid]==2)
        {
            swap(arr[mid],arr[j]);
            j--;
        }
    }
    return arr;
}