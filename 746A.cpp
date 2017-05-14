#include<bits/stdc++.h>
using namespace std;
int x1,x2,s,t1,t2,p,d;
int main()
{
   cin>>s>>x1>>x2>>t1>>t2>>p>>d;
   if((x1>x2&&d==-1)||(x1<x2&&d==1))
   {
       //if(t1<t2)cout<<abs(x2-x1)*t2;
       //else
       cout<<min(abs(x2-x1)*t2,abs(x1-p)*t1+abs(x2-x1)*t1);
   }
   else cout<<abs(x2-x1)*t2;
}
