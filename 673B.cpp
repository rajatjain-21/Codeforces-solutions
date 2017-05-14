#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,h,k,time=0;
    cin>>n>>h>>k;
    long long a[n+1];
    for(long long j=0;j<n;j++)
    {
        cin>>a[j];
    }
    long long i=1;
    long long temp=a[0];
    while(i<n&&temp)
    {


        if((temp+a[i])>h)
        {
            while(temp+a[i]>h)
            {
                temp-=k;
                if(temp<0)temp=0;
                time++;
            }
            temp+=a[i];
            i++;
        }
        else
        {
            while(temp+a[i]<=h){
            temp+=a[i];
            i++;}
            temp-=k;
        if(temp<0)temp=0;
        time++;

        }

    }
    if(temp%k==0)
    cout<<time+(temp/k);
    else cout<<time+(temp/k)+1;
}
