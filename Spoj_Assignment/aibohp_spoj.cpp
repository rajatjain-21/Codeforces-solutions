#include<bits/stdc++.h>
using namespace std;
int dp[6101][6101];
string s;
int rec(int i,int j)
{
    if(i>j)return INT_MAX;
    if(i==j)return 0;
    if(i==j-1)return (s[i]==s[j]?0:1);
    if(dp[i][j]!=-1)return dp[i][j];
    if(s[i]==s[j])return dp[i][j]=rec(i+1,j-1);
    else return dp[i][j]=min(rec(i+1,j),rec(i,j-1))+1;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        cin>>s;
        int n=s.length();
        memset(dp,-1,sizeof(dp));
        cout<<rec(0,n-1)<<endl;
    }
}
