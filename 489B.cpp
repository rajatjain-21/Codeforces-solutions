#include<bits/stdc++.h>
using namespace std;
bool possible(int m,int s)
{
    return s>=0&&s<=9*m;
}
int main()
{
    int m,s;
    string st,st1;
    cin>>m>>s;
    if((s==0&&m>1)||!possible(m,s))cout<<"-1 -1";
    else{
    int sum=s;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<10;j++)
        {
            if((i > 0 || j > 0 || (m == 1 && j == 0)) && possible(m-i-1,sum-j))
            {
                sum-=j;
                st+=char('0'+j);
                break;
            }
        }
    }
    sum=s;
    for(int i=0;i<m;i++)
    {
        for(int j=9;j>=0;j--)
        {
            if((i > 0 || j > 0 || (m == 1 && j == 0)) && possible(m-i-1,sum-j))
            {
                sum-=j;
                st1+=char('0'+j);
                break;
            }
        }
    }
    cout<<st<<" "<<st1;
    }
}
