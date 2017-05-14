#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,c=0;
    cin>>n;
    int a[n+1];
    for(ll i=1;i<=n;i++)cin>>a[i];
    sort(a+1,a+n+1);
    for(ll i=1;i<=n;i++)
    {
        if(a[i]>=i)c++;
    }
    cout<<c+1;
}
