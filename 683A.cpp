#include<bits/stdc++.h>
#define ll long long
ll power(ll x,ll n)
{
    if(n==0)return 1;
    else if(n%2==0)
    {
        int y=power(x,n/2);
        return ((y)*(y));
    }
    else return ((x)*(power(x,n-1)));
}
using namespace std;
int main()
{
    ll  n,dig=0,sum=0;
    cin>>n;
    ll  num=n;
    while(num)
    {
        num/=10;
        dig++;
    }
    ll  a[9];
    a[0]=9;
    for(ll  i=1;i<9;i++)
    {
        a[i]=a[i-1]+(9*power(10,i)*(i+1));
    }
    //for(ll  i=0;i<9;i++)cout<<a[i]<<" ";
    for(ll  i=0;i<=dig-2;i++)sum+=a[i];
    n=n-pow(10,dig-1)+1;
    cout<<sum+(n*dig);

}
