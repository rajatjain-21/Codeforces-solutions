#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1],x;
    for(int i=1;i<=n;i++)cin>>a[i];
    vector<int>v;
    v.push_back(-1);
    v.push_back(a[1]);
    for(int i=2;i<=n;i++)
    {
        v.push_back(a[i]+v[i-1]);
    }
    for(int i=0;i<n;i++)
    {
        cin>>x;
        int temp=v[x];
        //cout<<temp<<endl;
        v.erase(v.begin()+x);
        cout<<max(v[x-1],v[v.size()-1]-temp);
    }
}
