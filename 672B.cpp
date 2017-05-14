#include<bits/stdc++.h>
using namespace std;
bool allsame(unsigned long int a[],int n)
{
    int flag=1;
    for(int i=0;i<n-1;i++)
    {
        if(a[i]!=a[i+1])flag=0;
    }
    if(flag==1)return true;
    return false;

}
int main()
{
   unsigned long int k;
   int n;
   cin>>n>>k;
   unsigned long int a[n+2];
   for(int i=0;i<n;i++)cin>>a[i];
   if(allsame(a,n))cout<<"0";
   else{
        //k++;
        //sort(a,a+n);
        unsigned long int *c, *b, *d, *e;
        c=max_element(a,a+n);
        b=min_element(a,a+n);
        //if(k==0)cout<<max_element(a,a+n)-min_element(a,a+n);
        if(k==0)cout<<(*c)-(*b);
        else{
        while(k--)
        {
            //cout<<*c<<" " <<*b<<endl;
         (*c)--;
         (*b)++;
         //cout<<*c<<" " <<*b<<endl;
        c=max_element(a,a+n);
        b=min_element(a,a+n);
        //cout<<*c<<" "<<*b<<endl;
        }
        cout<<*c-*b;
   }
   }
}
