#include <cstdio>
const int n=100000,mo=1e9+7;
int f[n+5],i,t,k,x,y;
int main()
{
	scanf("%d%d\n",&t,&k);
	f[0]=1;
	for (i=1;i<=n;++i)
		f[i]=(f[i-1]+(i>=k?f[i-k]:0))%mo;
	for (i=1;i<=n;++i) f[i]=(f[i]+f[i-1])%mo;
	for (;t--;)
	{
		scanf("%d%d\n",&x,&y);
		printf("%d\n",(f[y]-f[x-1]+mo)%mo);
	}
}
