#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    int kr=0,kb=0,ky=0,kg=0;
    cin>>s;
    map<char,int>mp;
    int n=s.length();
    if(n<=4){
    for(int i=0;i<n;i++)
    {
        if(s[i]=='R')mp['R']=1;
        else if(s[i]=='B')mp['B']=1;
        else if(s[i]=='G')mp['G']=1;
        else if(s[i]=='Y')mp['Y']=1;
        else if (s[i]=='!')mp['!']=1;
    }
    if(mp['!']==1)
    {
        if(!mp['B'])kb++;
        else if(!mp['R'])kr++;
        else if(!mp['G'])kg++;
        else if(!mp['Y'])ky++;
    }
    }

    for(int i=0;i<n;i++)
    {
        if(s[i]=='!'){
            s[i]=s[i%4];
            mp[s[i%4]]++;
        }
    }
    kr=mp['R'];
    kb=mp['B'];
    kg=mp['G'];
    ky=mp['Y'];
    cout<<kr<<" "<<kb<<" "<<ky<<" "<<kg;
}
