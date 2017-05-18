#include<bits/stdc++.h>
using namespace std;
long long dp[10002],n,a[10002];
long long func(long long i)
{
 if(i>=n)return 0;
 if(dp[i]!=-1)return dp[i];
 else dp[i]=max(a[i]+func(i+2),func(i+1));
 return dp[i];
}
int main()
{
    long long t;
    cin>>t;
    long long temp=t;
    while(t--){
    cin>>n;
    for(long long i=0;i<n;i++)cin>>a[i];
    memset(dp,-1,sizeof(dp));
    cout<<"Case "<<temp-t<<": "<<func(0)<<"\n";
    }
}
