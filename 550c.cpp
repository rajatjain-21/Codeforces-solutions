#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    cin>>s;
    int n=s.length();
    if(n>=4)
    {
        s1=s.substr(n-3,3);
        int a,b,c,d,e;
        b=(s[n-3]-'0');
        c=(s[n-2]-'0');
        d=(s[n-1]-'0');
        e=(s[n-4]-'0');
        a=b*100+c*10+d;
        //cout<<a<<"\n";
        if(a%8==0){
            cout<<"YES"<<"\n"<<s;
        }
        else if((e*100+b*10+c)%8==0)
        {
            cout<<"YES"<<"\n"<<s.substr(0,n-1);
        }
        else if((e*100+b*10+d)%8==0)
        {
            cout<<"YES"<<"\n"<<s.substr(0,n-2)+s[n-1];
        }
        else if((e*100+c*10+d)%8==0)
        {
            cout<<"YES"<<"\n"<<s.substr(0,n-3)+s[n-2]+s[n-1];
        }
        else cout<<"NO";
    }
    else
    {
        if(n==1&&(s[i]=='8'||s[i]=='0'))cout<<"YES"<<"\n"<<s;
        else if(n==2)
        {
            b=s[n-1]-'0';
            c=s[n-2]-'0';
            if((c*10+b)%8==0)cout<<"YES"<<"\n"<<
        }
    }
}
