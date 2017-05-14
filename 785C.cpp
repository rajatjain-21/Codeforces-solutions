#include<bits/stdc++.h>
using namespace std;
main()
{
	long long n,m,i,j,t;
	cin>>n>>m;
	if(m>=n)cout<<n;
	else
	{
		t=sqrt(2*(n-m));
		if((t*(t+1))/2+m>=n)cout<<m+t;
		else cout<<m+t+1;
	}
}
