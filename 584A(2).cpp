#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,count=0;
    cin>>a>>b;
    while(a!=b)
    {
        max(a,b)-=min(a,b);
        count++;
    }
    cout<<count;
}
