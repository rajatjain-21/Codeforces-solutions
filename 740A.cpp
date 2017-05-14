#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,x,count=0,v;
    cin>>n>>x;
    vector<long long>a;
    long long freq[100002];
    fill(freq,freq+100002,0);
    long long count1=0;
    for(long long i=0;i<n;i++)
    {
        cin>>v;
        a.push_back(v);
        freq[v]++;
    }
    //for(int i=0;i<=5;i++)cout<<freq[i]<<" ";
    sort(a.begin(),a.end());
    a.erase(unique(a.begin(),a.end()),a.end());
    if(x==0)
    {
        for(int i=0;i<a.size();i++)
        {
            if(freq[a[i]]>1)count1+=((freq[a[i]]*(freq[a[i]]-1))/2);
        }
        cout<<count1;
    }
    else{
    for(long long i=0;i<a.size();i++)
    {
        if(binary_search(a.begin()+i+1,a.end(),a[i]^x))
        {

            count+=(freq[a[i]^x]*freq[a[i]]);
        }
    }
    cout<<count;
}
}
