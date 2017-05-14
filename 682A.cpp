#include<bits/stdc++.h>
#define ll long long
using namespace std;
int  main()
{
    ll  n,m,count=0;
    cin>>n>>m;
    for(ll  i=1;i<=n;i++)
    {
    count+=(m+i)/5-i/5;
    }
     cout<<count;
}
