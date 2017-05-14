#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,count0=0;
    cin>>n;
    int v[n+1],a[n+1],k=1;
    for(int i=1;i<=n;i++)
    {
        cin>>v[i];
        if(v[i]==0)count0++;
        else a[k]=v[i],k++;
    }
    sort(a+1,a+n+1);
    int count=0,maxi;
    int i=k;
    while(i>1){
          maxi=1;
        for(int j=i-1;j>=1;j--)
        {
            maxi=max(maxi,(j-a[j]));
        }
        //cout<<maxi<<endl;
        count++;
        i=maxi;
    }
    cout<<max(count,count0);
}
