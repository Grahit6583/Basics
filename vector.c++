
// C++ program to reverse Vector
// using reverse() in STL

#include <bits/stdc++.h>
#include<vector>
using namespace std;

int main()
{

    // Get the vector
    vector<int> a = { 1, 45, 54, 71, 76, 12 };
    int n;
    cout<<"Enter the element : ";
    cin>>n;

    // Print the vector
    cout << "Vector: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    // Reverse the vector
    reverse(a.begin(), a.end());

    // Print the reversed vector
    cout << "Reversed Vector: ";
    for (int i = 0; i < a.size(); i++)
        cout << a[i] << " ";
    cout << endl;

    return 0;
}