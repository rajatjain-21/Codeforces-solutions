#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
    int n,x,y;
    cin>>n;
    int a[n*n+1],b[n*n+1];
    fill(a,a+(n*n)+1,0);
    fill(b,b+(n*n)+1,0);
    vector<int>v;
    for(int i=1;i<=n*n;i++)
    {
        cin>>x>>y;
      if(a[x]!=1&&b[y]!=1)
      {
          v.push_back(i);
          a[x]=1;b[y]=1;
      }
    }
    for(int i=0;i<v.size();i++)cout<<v[i]<<" ";
}
