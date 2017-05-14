#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,p,q;
	string s;
	cin>>n>>p>>q;
	cin>>s;
		int k=0;
	if(p+q==n){
		cout<<"2"<<"\n";
		string ss=s.substr(0,p);
		cout<<ss<<"\n";
		string ss1=s.substr(p,q);
		cout<<ss1<<"\n";
	}
	
	else if(n%p==0){
		cout<<n/p<<"\n";
		for(int i=0;i<n/p;i++){
			string ss=s.substr(k,p);
			cout<<ss<<"\n";
			k+=p;
		}
	}
	else if(n%q==0){
		cout<<n/q<<"\n";
		for(int i=0;i<n/q;i++){
			string ss=s.substr(k,q);
			cout<<ss<<"\n";
			k+=q;
		}
	}
	else cout<<"-1";
}
