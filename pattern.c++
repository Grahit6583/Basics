#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,n,count=1;
    cin>>n;
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=n;j++)
    //     {
    //         cout<<n-j+1;
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=n;j++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<count<<" ";
    //         count++;
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     int value = i;
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<value<<" ";
    //         value++;
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     for(j=i;j<2*i;j++)
    //     {
    //         cout<<j<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<i+1-j<<" ";
    //     }
    //     cout<<endl;
    // }
    // ------------------------------------characters---------------------------
    char ch;
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=n;j++)
    //     {
    //         ch = 'A'+i-1;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }
    // char start = 'A';
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=n;j++)
    //     {
    //         cout<<start<<" ";
    //         start++;
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=n;j++)
    //     {
    //         ch = 'A'+i+j-2;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }
    // ch = 'A';
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<ch<<" ";   //ch = ('A'+i-1);
    //     }
    //     cout<<endl;
    //     ch++;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=i;j++)
    //     {
    //         ch = 'A'+j+i-2;
    //         cout<<ch<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     ch = 'A'+n-i;
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<ch<<" ";   //ch = ('A'+i-1);
    //         ch++;
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     for(j=1;j<=n;j++)
    //     {
    //         ch = 'A'+i+j-2;
    //         cout<<ch<<" ";   //ch = ('A'+i-1);
    //         ch++;
    //     }
    //     cout<<endl;
    // }
    // -----------------------------------pattern---------------------------------
    int k;
    // for(i=1;i<=n;i++)
    // {
    //     for(k=i;k<n;k++)
    //     {
    //         cout<<" ";
    //     }
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     for(k=0;k<i-1;k++)
    //     {
    //         cout<<" ";
    //     }
    //     for(j=i;j<=n;j++)
    //     {
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     for(k=0;k<i-1;k++)
    //     {
    //         cout<<" ";
    //     }
    //     for(j=i;j<=n;j++)
    //     {
    //         cout<<i<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     for(k=0;k<n-i;k++)
    //     {
    //         cout<<" ";
    //     }
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<i;
    //     }
    //     cout<<endl;
    // }
    // for(i=1;i<=n;i++)
    // {
    //     for(k=1;k<=i-1;k++)
    //     {
    //         cout<<" ";
    //     }
    //     int count = i;
    //     for(j=1;j<=n-i+1;j++)
    //     {
    //         cout<<count;
    //         count++;
    //     }
    //     cout<<endl;
    // }
    // int flag = 1;
    // for(i=1;i<=n;i++)
    // {
    //     for(k=1;k<=n-i;k++)
    //     {
    //         cout<<" ";
    //     }
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<flag;
    //         flag++;
    //     }
    //     cout<<endl;
    // }
    // int l;
    // for(i=1;i<=n;i++)
    // {
    //     for(k=1;k<=n-i;k++)
    //     {
    //         cout<<" ";
    //     }
    //     for(j=1;j<=i;j++)
    //     {
    //         cout<<j;
    //     }
    //     for(l=i-1;l>0;l--)
    //     {
    //         cout<<l;
    //     }
    //     cout<<endl;
    // }
    int l,m;
    for(i=1;i<=n;i++)
    {
        for(k=1;k<=n-i+1;k++)
        {
            cout<<k;
        }
        for(j=1;j<=i-1;j++)
        {
            cout<<"*";
        }
        for(l=i-1;l>0;l--)
        {
            cout<<"*";
        }
        int o=n;
        for(m=n-i+1;m>=1;m--)
        {
            cout<<m;
        }
        cout<<endl;
    }
}