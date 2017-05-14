#include <bits/stdc++.h>
using namespace std;
int s[100000];
int county(long long int n)
{
    int d,i=0;
    while(n)
    {
      d=n%10;
      n/=10;
      i++;
    }
    return i;
}
void mover(int n)
{
    int i=0,d;
    while(n)
    {
      d=n%10;
      n/=10;
      s[i]=d;
      i++;
    }
}
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    long long n,t,k=0;
    cin>>n>>t;
    int a[100000];
    int div=t;
    mover(div);
    //cout<<s;
    for(int i=county(div)-1;i>=0;i--)
    {
        s[i]=a[k];
        k++;
        cout<<a[k];
    }
    /*if(county(t)<=n){
    while(county(t)!=n)
    {
        t*=10;
    }
   cout<<t;
    }
    else cout<<"-1";*/

}
