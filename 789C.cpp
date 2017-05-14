#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    ll n,k;
    cin>>n>>k;
    ll org[k+1],a[n+1];
    map<int,int>mp;
    for(int i=0;i<n;i++)
    {
        a[i]=i+1;
        mp[a[i]]=1;
    }
    for(ll i=0;i<k;i++)cin>>org[i];
    int ptr=0,count=0;
    for(int i=0;i<k;i++)
    {count=0;
       while(1){ ptr=(ptr+1)%n;
        if(mp[a[ptr]]==1)count++;
        if(count==org[i]%(n-i))
        {cout<<ptr<<" "<<a[ptr]<<endl;
        mp[a[ptr]]=0;
        break;}
       }
        ptr=(ptr+1)%n;
        cout<<"new head:"<<a[ptr]<<endl;
    }
}
