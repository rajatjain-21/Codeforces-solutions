#include <bits/stdc++.h>
using namespace std;
int n,l,r,x,c[20];
int fun(int s,int a,int b,int i)
{
    return(i==n)?s>=l&&s<=r&&b-a>=x:fun(s+c[i],min(a,c[i]),max(b,c[i]),i+1)+fun(s,a,b,i+1);
}
int main()
{
    cin>>n>>l>>r>>x;
    for(int i=0;i<n;i++) cin>>c[i];
    cout<<fun(0,1e9,0,0);
}
