#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll  n,m;
    cin>>n>>m;
    ll  a[m+1],b[m+1];
    for(ll  i=0;i<m;i++)
    {
        cin>>a[i];
    }
    sort(a,a+m);
    ll  k=0;
    for(ll  i=0;i<=m-n;i++)
    {
        b[k]=a[i+n-1]-a[i];
        k++;
    }
    ll  min=b[0];
    for(ll  i=0;i<k;i++)
    {
        if(b[i]<min)min=b[i];
    }
    cout<<min;

}
