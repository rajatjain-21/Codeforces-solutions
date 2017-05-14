#include<bits/stdc++.h>
#define MAX 20002
using namespace std;
long long result=0;
long long solution(long long n)
{
    if(n==0||n==1||n==2)return result+=1;
for(long long j=n;j>=2;j--) {
  if(j%2 == 1) {
    double m = double(j);
    double a = (m-1)/6.0;
    double b = (m-5)/6.0;
    if( a-(long long)a == 0 || b-(long long)b == 0 ) {
      result=result+1;
      cout<<j<<endl;
      solution(n-j);
      break;
    }
  }
}
}

int main()
{
    long long n;
    cin>>n;
    int res=solution(n);
    cout<<res;
}
