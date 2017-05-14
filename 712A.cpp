#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    long long  x=0,y=0;
    if(s.length()%2!=0)cout<<"-1";
    else
    {
        for(long long  i=0;i<s.length();i++)
        {
            if(s[i]=='U')y++;
            else if(s[i]=='D')y--;
            else if(s[i]=='R')x++;
            else if(s[i]=='L')x--;
        }
        cout<<(abs(x)+abs(y))/2;
    }
}
