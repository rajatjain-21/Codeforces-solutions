#include <bits/stdc++.h>
using namespace std;
#define rep(i,a,n) for (int i=a;i<n;i++)
typedef long long ll;
int n,c[2010][2010],x[2],y[2];
ll a[4010],b[4010],ret[2];
int main() {
    scanf("%d",&n);
    rep(i,0,n) rep(j,0,n) {
        scanf("%d",&c[i][j]);
        a[i+j]+=c[i][j];
        b[i-j+n]+=c[i][j];
    }
    rep(i,0,n) rep(j,0,n) if (a[i+j]+b[i-j+n]-c[i][j]>=ret[(i+j)&1]) {
        int v=(i+j)&1;
        ret[v]=a[i+j]+b[i-j+n]-c[i][j];
        x[v]=i+1; y[v]=j+1;
    }
    printf("%I64d\n",ret[0]+ret[1]);
    printf("%d %d %d %d\n",x[0],y[0],x[1],y[1]);
}
