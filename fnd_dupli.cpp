#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int unique(vector<int> &v);
int main()
{
    int n,a,i;
    vector<int> v;
    cout<<"Enter the size of array";
    cin>>n;
    cout<<"\nEnter the data in vector";
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    for(i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\t";
    }
    int ans = unique(v);
    cout<<"\nthe unique number is : "<<ans;
}
int unique(vector<int> &v)
{
    int i,ans=0;
    for(i=0;i<v.size();i++)
    {
        ans = ans^v[i];
    }
    for(i=1;i<v.size();i++)
    {
        ans = ans^i;
    }
    return ans;
}