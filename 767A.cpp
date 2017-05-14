#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ts,tf,t,n;
    cin>>ts>>tf>>t>>n;
    int a[n+1];
    for(int i=0;i<n;i++)cin>>a[i];
    int no=(tf-ts)/t;
    int flag=1;
    for(int i=0;i<no;i++)
    {
        if(a[i]>=ts)
        {
            flag=0;
            break;
        }
    }
    map<int,int>mp;
        for(int i=0;i<no;i++)
        {
            if(a[i]>=ts){
            for(int j=a[i];j<=a[i]+t-1;j++)mp[j]++;
            }
            else mp[a[i]]++;
        }
        vector<int>v;
        map<int,int>::iterator it;
        for(it=mp.begin();it!=mp.end();it++)cout<<it->first<<" "<<it->second<<endl;
        /*for(int i=a[0]-1;i<=a[no-1];i++)
        {
            if(!mp[i])v.push_back(abs(ts-i));
        }
    sort(v.begin(),v.end());
    cout<<abs(ts-v[0]);*/
}
