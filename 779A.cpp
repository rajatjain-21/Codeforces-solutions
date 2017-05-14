#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,k,d,count=0,count1=0,dig=0;
    cin>>n>>k;
    long long num;
    num=n;
    while(num)
    {
        d=num%10;
        num/=10;
        dig++;
    }
    num=n;
    long long flag=1;
    while(num)
    {
        if(count==k)break;
        if(num<=9){cout<<dig-1;
        flag=0;
        break;}
        d=num%10;
        num/=10;
        if(d==0)count++;
        else count1++;
    }
    if(flag==1)
    cout<<count1;
}
