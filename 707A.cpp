#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,flag=1;
    cin>>n>>m;
   char x;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>x;
            if(x=='C'||x=='M'||x=='Y')flag=0;
        }
    }
    if(flag==0)cout<<"#Color";
    else cout<<"#Black&White";
}
