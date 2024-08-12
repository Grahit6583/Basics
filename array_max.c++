#include<iostream>
using namespace std;
int main()
{
    int n,arr[n],i,max,min,item;
    cout<<"Enter the number ";
    cin>>n;
    cout<<"enter the data \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    max = arr[0];
    min = arr[1];
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        else
        {
            min = arr[i];
        }
    }

    cout<<max<<"\n";
    cout<<min;
}