#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    while(1){
    map<int,pair<int,int> >mp;
    cin>>n;
    if(n==0)exit(0);
    int a[n+1],suma[n+1],sum=0;
    suma[0]=0;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        mp[a[i]]=make_pair(1,i);
        sum+=a[i];
        suma[i]=sum;
    }
    cin>>m;
    int b[m+1],sumb[m+1];
    sumb[0]=0;
    sum=0;
    for(int i=1;i<=m;i++)
    {
        cin>>b[i];
        sum+=b[i];
        sumb[i]=sum;
    }
    int temp=1,temp1=1;
    vector<int>anew,bnew;
    for(int i=1;i<=m;i++)
    {
        if(mp[b[i]].first==1)
        {
            anew.push_back(suma[mp[b[i]].second]-suma[temp-1]);
            bnew.push_back(sumb[i]-sumb[temp1-1]);
            temp=mp[b[i]].second+1;
            temp1=i+1;
        }
    }
    anew.push_back(suma[n]-suma[temp-1]);
    bnew.push_back(sumb[m]-sumb[temp1-1]);
    /*for(int i=0;i<anew.size();i++)cout<<anew[i]<<" ";
    cout<<endl;
    for(int i=0;i<bnew.size();i++)cout<<bnew[i]<<" ";*/
        sum=0;
        for(int i=0;i<anew.size();i++)
    {
        sum+=max(anew[i],bnew[i]);
    }
    cout<<sum<<endl;
    }
}
