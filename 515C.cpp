#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    string s,str;
    cin>>n>>s;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='4')str+="322";
         if(s[i]=='2')str+='2';
          if(s[i]=='3')str+='3';
           if(s[i]=='5')str+='5';
            if(s[i]=='6')str+="53";
             if(s[i]=='7')str+='7';
              if(s[i]=='8')str+="7222";
               if(s[i]=='9')str+="7332";
    }
    int a[str.length()+1];
    for(int i=0;i<str.length();i++)
    {
        a[i]=(str[i]-'0');
    }
    sort(a,a+str.length(),greater<int>());
    for(int i=0;i<str.length();i++)cout<<a[i];
}
