#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int> findDuplicates(vector<int> &nums) {
    sort(nums.begin(),nums.end());
    vector<int> arr;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==nums[i+1]){
            arr.push_back(nums[i]);
        }
    }
    return arr;
}
int main()
{
    int a,i,n;
    cout<<"Enter the size of array : ";
    cin>>n;
    vector<int> v;
    cout<<"Enter the data in array\n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    vector<int> ans = findDuplicates(v);
    cout<<"\n";
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"\t";
    }
    return 0;
}