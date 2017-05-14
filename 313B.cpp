#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int q,x,y,l;
    l=s.length();
    int a[l+1],b[l+1];
    for(int i=0;i<l-1;i++)
    {
        if(s[i]==s[i+1])a[i]=1;
        else a[i]=0;
    }
    fill(b,b+l+1,0);
    int sum=0;
    for(int i=0;i<l-1;i++)
    {
        if(a[i]==1)
        {
            sum++;
            b[i]=sum;
        }
        else b[i]=sum;
    }
    for(int i=0;i<l-1;i++)cout<<a[i]<<" ";
    cout<<endl;
      for(int i=0;i<l-1;i++)cout<<b[i]<<" ";
      cout<<endl;
    cin>>q;
    while(q--)
    {
        cin>>x>>y;
        //if(y-x==1)cout<<a[x]<<endl;
        cout<<b[y-2]-b[x-1]+1<<endl;
    }
}
