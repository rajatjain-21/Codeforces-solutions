#include<bits/stdc++.h>
# define MOD 1000000007
template <typename T>
T modpow(T base, T exp, T modulus) {
  base %= modulus;
  T result = 1;
  while (exp > 0) {
    if (exp & 1) result = (result * base) % modulus;
    base = (base * base) % modulus;
    exp >>= 1;
  }
  return result;
}
using namespace std;
int main()
{
    int t,n,p;
    cin>>t;
    while(t--)
    {
        long long int res=0,d[33];
        cin>>p>>n;
        int num=n;
        int i=1;
        while(num>=1){
            d[i]=num%2;
            num=num/2;
            ++i;
        }
       for(int j=i-1;j>0;j--)
        {
            if(d[j]==1)
            {
                res=(res%MOD+modpow(p,j-1,MOD))%MOD;
            }
        }
        cout<<res<<endl;
    }
}
