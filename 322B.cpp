#include<bits/stdc++.h>
using namespace std;
int main()
{
    int r,g,b,count=0;
    cin>>r>>g>>b;
    while(r&&b&&g)
    {
        r--,b--,g--;
        count++;
    }
    count+=(r/3)+(b/3)+(g/3);
    cout<<count;
}
