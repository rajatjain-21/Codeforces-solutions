#include<bits/stdc++.h>
using namespace std;
int main ()
{
    string s;
    string s1=".";
    cin>>s;
    int l=s.length();
    for(int i=0;i<l;i++)
    {
        s[i]=tolower(s[i]);
    }
    for(int i=0;i<l;i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='y')
        {
                   s.erase(i,1);
                   i--;
        }
    }
    int l1=s.length();
    for(int i=0;i<2*l1;i+=2)
    {
        s.insert(s.begin()+i,'.');
    }
    //if(l1%2!=0)cout<<s<<endl;
    //else for(int i=0;i<l;i++)cout<<s[i];

    cout<<s;
}
