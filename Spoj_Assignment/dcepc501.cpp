#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[100011],n,a[100011];
ll rec(ll i)
{
    if(i>=n-1)return 0;
    if(dp[i]!=-1)return dp[i];
    else return dp[i]=max(a[i]+rec(i+2),max(a[i]+a[i+1]+rec(i+4),a[i]+a[i+1]+a[i+2]+rec(i+6)));
}
int main()
{
    ll t;
    cin>>t;
    while(t--){
        cin>>n;
        for(ll i=0;i<n;i++)cin>>a[i];
        memset(dp,-1,sizeof(dp));
        cout<<rec(0)<<endl;
    }
}
