#include<bits/stdc++.h>
using namespace std;
int main()
{
   vector<int>a,b;
    char c;
    int flag=1;
    for(int i=1;i<=16;i++)
    {
        cin>>c;
        if(c=='x')a.push_back(i);
        else if(c=='.')b.push_back(i);
    }
    for(int i=0;i<a.size();i++)
    {
        for(int j=1;j<a.size();j++)
        {
            if((a[j]-a[i]==1&&((a[j]%4!=0&&binary_search(b.begin(),b.end(),a[j]+1))||(a[i]%4!=1&&binary_search(b.begin(),b.end(),a[i]-1))))||(a[j]-a[i]==2&&a[i]%4!=0&&binary_search(b.begin(),b.end(),a[i]+1)))
            {
                cout<<"YES";
                flag=0;
                break;
            }
            else if((a[j]-a[i]==4&&((a[j]%4!=0&&binary_search(b.begin(),b.end(),a[j]+4))||(a[i]%4!=1&&binary_search(b.begin(),b.end(),a[i]-4))))||(a[j]-a[i]==8&&a[i]%4!=0&&binary_search(b.begin(),b.end(),a[i]+4)))
            {
                cout<<"YES";
                flag=0;
                break;
            }
            else if((a[j]-a[i]==5&&((a[j]%4!=0&&binary_search(b.begin(),b.end(),a[j]+5))||(a[i]%4!=1&&binary_search(b.begin(),b.end(),a[i]-5))))||(a[j]-a[i]==10&&a[i]%4!=0&&binary_search(b.begin(),b.end(),a[i]+5)))
            {
                cout<<"YES";
                flag=0;
                break;
            }
        }
        if(flag==0)break;
    }
    if(flag==1)cout<<"NO";

}
