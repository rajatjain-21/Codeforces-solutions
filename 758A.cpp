#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,sum=0,m;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    m=a[0];
    for(int i=1;i<n;i++)
    {
        if(a[i]>m)m=a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum+=(m-a[i]);
    }
    cout<<sum;
}
