#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
// --------ALL ARRAYS ARE SORTED ----------------
// vector<int> findintersection(vector<int> &v1 , int n ,vector<int> &v2)
// {
//     int m=v2.size(),i,j,temp;
//     vector<int> arr;
//     for(i=0;i<n;i++)
//     {
//         temp = v1[i];
//         for(j=0;j<v2.size();j++)
//         {
//             if(temp==v2[j])
//             {
//                 arr.push_back(temp);
//                 v2[j] = INT_MIN;
//                 break;
//             }
//         }
//     }
//     return arr;
// }
// ---------------------OPTIMIZED SOLUTION---------------------
// --------------------2 POINTER APPROACH----------------------
vector<int> findintersection(vector<int> &v1 , int n ,vector<int> &v2)
{
    int m=v2.size(),i=0,j=0,temp;
    vector<int> arr;
    while(i<n && j<m)
    {
        if(v1[i]==v2[j])
        {
            arr.push_back(v1[i]);
            i++;
            j++;
        }
        else if(v1[i]<v2[j])
        {
            i++;
        }
        else
        {
            j++;
        }
    }
    return arr;
}
int main()
{
    vector<int> v1,v2;
    int n,i,m,a;
    cout<<"Enter the size of vector 1 : ";
    cin>>n;
    cout<<"Enter the data in the vector\n";
    for(i=0;i<n;i++)
    {
        cin>>a;
        v1.push_back(a);
    }
    cout<<"Enter the size of vector 2 : ";
    cin>>m;
    cout<<"Enter the data in the vector\n";
    for(i=0;i<m;i++)
    {
        cin>>a;
        v2.push_back(a);
    }
    vector<int> ans;
    ans = findintersection(v1,n,v2);
    for(i=0;i<ans.size();i++)
    {
        cout<<ans[i]<<"\t";
    }
}