#include<bits/stdc++.h>
#define ll long long
#define M 1000000009
using namespace std;
ll power(ll x,ll n)
{
    if(n==0)return 1;
    else if(n%2==0)
    {
        ll y=power(x,n/2);
        return ((y%M)*(y%M))%M;
    }
    else return ((x%M)*(power(x,n-1)%M))%M;
}
int main()
{
    ll  a,b,x,y;
    cin>>a>>b;
    ll  m[a+1];
    ll  temp1=0,t=0;
    for(ll  i=0;i<a;i++)cin>>m[i];
    for(ll  i=a-1;i>=0;i--)
    {
        temp1=((temp1%M)+((m[i]%M)*(power(b,t)))%M)%M;
        t++;
    }
    cin>>x>>y;
    ll  temp2=0,t1=0;
    ll  m1[x+1];
    for(ll  i=0;i<x;i++)cin>>m1[i];
    for(ll  i=x-1;i>=0;i--)
    {
       temp2=((temp2%M)+((m1[i]%M)*(power(y,t1)))%M)%M;
        t1++;
    }
    //cout<<temp1<<" "<<temp2<<endl;
    if(temp1==temp2)cout<<"=";
    else if(temp1>temp2)cout<<">";
    else cout<<"<";
}
