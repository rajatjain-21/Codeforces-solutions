#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,s1;
    map<string,int>mp;
    mp["monday"]=1;
     mp["tuesday"]=2;
      mp["wednesday"]=3;
       mp["thursday"]=4;
        mp["friday"]=5;
         mp["saturday"]=6;
          mp["sunday"]=7;
    cin>>s>>s1;
    int temp=mp[s1]-mp[s];
    if(temp>=0)
    {
        if(temp==0||temp==2||temp==3)cout<<"YES";
        else cout<<"NO";
    }
    else
    {
        if(temp==-4)cout<<"YES";
        else cout<<"NO";
    }

}
