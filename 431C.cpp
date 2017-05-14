#include<bits/stdc++.h>
#define M 1000000007
#define ll long long
using namespace std;
ll dp[105][2];
ll  d,k,co=0;
ll  rec(ll  sum,ll b)
{
    if(sum<0)
        return 0;
    else if(sum==0)
    {
        if(b==1)
            return 1;
        else if(b==0)
            return 0;
    }
    else if(dp[sum][b]==-1)
    {
        ll res=0;
        for(ll i=1;i<=k;i++)
        {
            if(i>=d)
                res+=rec(sum-i,1)%M;
            else
                res+=rec(sum-i,b)%M;
        }
        dp[sum][b]=res;
    }
    return dp[sum][b];
}
int main()
{
    ll  n;
    cin>>n>>k>>d;
    memset(dp,-1,sizeof(dp));
    ll  res=rec(n,0)%M;

    cout<<res;
}
