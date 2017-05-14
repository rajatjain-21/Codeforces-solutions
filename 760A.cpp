#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,k;
    cin>>n>>m>>k;
    int frodo=m/n;
    if(m%n!=0)frodo++;
    if((m-k>=2||k-1>=2)&&(m%n>3||m%n==0)&&m/n>1)frodo++;
    cout<<frodo;
}
