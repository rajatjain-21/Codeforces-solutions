#include<bits/stdc++.h>
#define ll long long
#define M 1000000007
using namespace std;
ll  mod(ll  a,ll  b,ll  c)
{
    if(b==0)return 1;
    else if(b==1)return a%c;
    else
    {
        if(b%2==0)
        {
            ll  y=mod(a,b/2,c);
            return (y*y)%c;
        }
        else return((a%c)*mod(a,b-1,c))%c;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll  t,l,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n==1)cout<<"3"<<"\n";
        else if(n==2)cout<<"9"<<"\n";
        else{
        ll res1=mod(3,n,M);
        ll res2=mod(3,n-3,M);
        ll res3=(res1-(6*(n-2)*res2)%M)%M;
        cout<<res3<<endl;
    }
    }
}
