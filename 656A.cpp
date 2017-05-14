#include<bits/stdc++.h>
using namespace std;
int main()
{
    unsigned long long a,b,n;
    cin>>a>>b>>n;
    unsigned long long fib[n+1];
    fib[0]=a;
    fib[1]=b;
    for(int i=2;i<n;i++)
    {
        fib[i]=pow(fib[i-1],2)+fib[i-2];
    }
    cout<<fib[n-1];
}
