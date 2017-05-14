#include<bits/stdc++.h>
using namespace std;
/*int binary(int a[],int n,int x,int hi,int lo)
{
    int mid=n/2;
    if(mid==x)return mid;
    if(mid<x)
}*/
int main()
{
    int n,a,q,x;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    cin>>q;
    for(int i=0;i<q;i++)
    {
        cin>>x;
        vector<int>::iterator it=upper_bound(v.begin(),v.end(),x);
        cout<<(it-v.begin())<<endl;
    }
}
