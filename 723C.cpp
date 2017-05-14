#include <bits/stdc++.h>
using namespace std;
int n,m,ans,p;
int a[2001],b[2001];
int main()
{
	cin>>n>>m;
	for(int i=0;i<n;++i)
    {
        cin>>a[i];
        if(a[i]<=m)++b[a[i]];
    }
	for(int i=1;i<=m;++i)
        while(b[i]<n/m)
            for(int j=0;j<n&&b[i]<n/m;++j)
            {
                if(a[j]>m)p=j+1,a[j]=i,++b[i],++ans;
                else if(b[a[j]]>n/m)p=j+1,--b[a[j]],a[j]=i,++b[i],++ans;
            }
	cout<<n/m<<" "<<ans<<endl;
	for(int i=0;i<n;++i)cout<<a[i]<<" ";
	return 0;
}
