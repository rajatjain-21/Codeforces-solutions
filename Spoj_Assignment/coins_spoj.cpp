#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll dp[100002];
ll rec(ll n)
{
    if(n==2||n==1||n==0)return n;
    if(n>=2&&n<=100000)
    {
        if(dp[n]!=-1)return dp[n];
        else return dp[n]=max(n,rec(n/2)+rec(n/3)+rec(n/4));
    }
    else{
        ll s=rec(n/2)+rec(n/3)+rec(n/4);
        return max(s,n);
    }
}
int main()
{
    ll n;
    while((scanf("%lld",&n))!=EOF){
            memset(dp,-1,sizeof(dp));
        cout<<rec(n)<<endl;
    }
}
