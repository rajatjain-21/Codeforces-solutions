#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,m,k,x,a,b;
    cin>>n>>m>>k;
    for(long long i=0;i<k;i++)cin>>x;
    for(long long i=0;i<m;i++)cin>>a>>b;
    long long v=n-k+1;
    long long res=(v*(v-1))/2;
    res-=m;
    cout<<res;
}
