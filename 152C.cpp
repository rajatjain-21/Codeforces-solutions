#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
    ll  t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        ll  n0=0,n100=0;
        ll  a[n+1];
        for(ll  i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(ll  i=0;i<n;i++)
        {
            if(a[i]==0)n0++;
            else if(a[i]==1&&n0>0)
            {
                n0--;
                n100++;
            }
        }
        ll  res=(1100*n0)+(n100*1200);
        cout<<res<<"\n";
    }
}
