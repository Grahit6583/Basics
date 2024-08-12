#include<iostream>
using namespace std;
bool uniqueOccurrences(int arr[], int n) {
	int firstArr[n] = { 0 };
	int secondArr[n] = { 0 };

	for (int i = 0; i < n; i++)
	{
		firstArr[arr[i]]++;
	}
    cout<<"\n";
	for (int i = 0; i < n; i++)
	{
    	if (firstArr[i]) {
			secondArr[firstArr[i]]++;
            cout<<secondArr[firstArr[i]];
			if (secondArr[firstArr[i]] > 1)
				return false;
		}
	}	return true;
}
int main()
{
    int n,i,ans;
    cout<<"Enter the size of arr : ";
    cin>>n;
    int arr[n];
    cout<<"Enter the data in array : \n";
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    ans=uniqueOccurrences(arr, n);
    if(ans == true)
    {
        cout<<"\nunique";
    }
    else
    {
        cout<<"\nnot unique";
    }
}