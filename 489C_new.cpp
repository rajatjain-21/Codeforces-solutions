#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,s;
    cin>>m>>s;
    string st={};
    if(s>9*m||(m>1&&s==0))cout<<"-1";
    else{
        while(s>9&&m>0)
        {
            st+='9';
            s-=9;
            m--;
        }
        if(s<=9&&m>0)st+=char(s+'0');
        while(m)
        {
            st+='0';
        }
         cout<<st;
    }

}
