#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,x;
    cin>>n>>k;
    int c[n+1];
    int visited[n+1][n+1];
    int sum1=0;
    for(int i=1;i<=n;i++)
    {
        cin>>c[i];
        sum1+=c[i];
    }
    for(int i=1;i<=n;i++)
        {
            for(int j=1;j<n;j++)
            {
                if(i==j)visited[i][j]=1;
                else
                visited[i][j]=0;
            }
        }
        int sum=0;
        for(int i=1;i<n;i++)
        {
            sum+=(c[i]*c[i+1]);
            visited[i][i+1]=1;
            visited[i+1][i]=1;
        }
        sum+=c[n]*c[1];
        visited[1][n]=1;
        visited[n][1]=1;
    for(int i=0;i<k;i++)
    {
        cin>>x;
        if(x==1)
        sum+=c[x]*(sum1-(c[x+1])-c[x]-c[n]);
        else if(x==n)sum+=c[x]*(sum1-(c[x-1])-c[x]-c[1]);
        else sum+=c[x]*(sum1-(c[x+1])-(c[x-1])-c[x]);
        /*for(int j=1;j<n;j++)
        {
            if(visited[j][x]==0)
            {
                visited[j][x]=1;
                visited[x][j]=1;
                sum+=(c[j]*c[x]);
            }
            //cout<<sum<<endl;
        }*/
        //cout<<sum;
    }
    cout<<sum;
}
