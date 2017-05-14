#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,flag=1;
    cin>>n;
    int a[n+1];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    char s;
     s=getchar();
    for(int i=0;i<n;i++)
    {
        int c=0;
        for(c=0,s=getchar();s!='\n';s=getchar())
        {
            if(s=='a'||s=='e'||s=='i'||s=='o'||s=='u'||s=='y')c++;
        }
        if(c!=a[i])
        {
            flag=0;
        }
    }
    if(flag==1)cout<<"YES";
    else cout<<"NO";
}
