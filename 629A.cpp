#include <iostream>     // std::cout
#include <algorithm>    // std::lower_bound, std::upper_bound, std::sort
#include <vector>       // std::vector
using namespace std;
int main () {
  long int n,m;
    cin>>n;
    long int a[n+1],t[n+1];
    for(long int i=1;i<=n;i++)cin>>a[i];
    for(long int i=2;i<=n;i++)
    {
        a[i]=a[i]+a[i-1];
    }
    for(long int i=1;i<=n;i++)cout<<a[i]<<endl;
  /*vector<int> v(a,a+n);

  sort (v.begin(), v.end());
  vector<int>::iterator low,up;
  cin>>m;
    int b[m+1];
    for(long int i=1;i<=m;i++)cin>>b[i];
  for(int i=1;i<=m;i++)
  {
  low=upper_bound (v.begin(), v.end(), b[i]);
  cout << (low- v.begin())+1 << '\n';
  }
  return 0;*/
}
