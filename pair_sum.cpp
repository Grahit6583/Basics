#include<iostream>
#include<conio.h>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> pairsum(vector<int> &arr,int s)
{
    vector<vector<int>> ans;
    for(int i=0;i<arr.size();i++)
    {
        for(int j = i+1;j<arr.size();j++)
        {
            if(arr[i]+arr[j] == s)
            {
                vector<int> temp;
                temp.push_back(min(arr[i],arr[j]));
                temp.push_back(max(arr[i],arr[j]));
                ans.push_back(temp);
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
}
int main()
{
    vector<int> arr;
    int i,n,a,j;
    cout<<"Enter the size of vector 1 : ";
    cin>>n;
    cout<<"Enter the in arr 1: \n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        arr.push_back(a);
    }
    vector<vector<int>> ans;
    ans = pairsum(arr , 0);
    for(i=0;i<ans.size();i++)
    {
        for(j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<"  ";
        }
        cout<<endl;
    }
}