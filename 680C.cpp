#include<bits/stdc++.h>
using namespace std;
#define Rep(n) for(int i=0;i<(n);i++)
#define For(a,b) for(int i=(a);i<=(b);i++)
#define ForD(i,a,b) for(auto i=(b);i>=a;i--)
#define DEBUG(x) cout << '>' << #x << ':' << x << endl;
#define DEBUGP(x,y) cout<<#x<<': '<<x<<' '<<#y<<': '<<y<<endl;
#define pi pair<int,int>
#define pll pair<long long int, long long int>
#define mp make_pair
#define pb push_back
#define vi vector<int>
#define vl vector<long long int>
#define ll long long int
#define ull unsigned long long int
#define vp vector<pi>
#define inp(a) cin>>(a)
#define op(ans) cout<<(ans)<<"\n"
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
#define MOD 1000000007

//functions
inline void printArr(int A[],int n) {for(int i=0;i<n;i++) cout<<A[i];}
template<class T> T chmax(T & a, const T & b) { a = max(a, b); return a; }
template<class T> T chmin(T & a, const T & b) { a = min(a, b); return a; }
template<class T> T mod(T a) { return ((a)%(MOD)+(MOD))%(MOD); }
template<class T> T add_mod(T a, T b) {return ((a)%MOD + (b)%MOD)%MOD ; }
template<class T> T mul_mod(T a,T b) { return (((a)%MOD)*((b)%MOD))%MOD; }
template<class T> T pow_mod(T a, T b){ if (b==0) return 1; ll temp = mod(pow_mod(a,b<<1)); return (b&1)? mul_mod(a,mul_mod(temp,temp)) : mul_mod(temp,temp);}
template<class T> T pow(T a, T b){ if(b==0) return 1; ll temp = pow(a,b<<1); return (b&1)? a*temp*temp :  temp*temp; }

int prime[]= {2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,4,9,25,49};
int main(){
	int cnt=0;
	string ans;
	Rep(19){
		cout<<prime[i]<<"\n";
		fflush(stdout);
		cin>>ans;
		fflush(stdin);
		cnt += (ans=="yes");
		if(cnt==2)
		   {
		   	cout<<"composite\n";
		   	fflush(stdout);
		   }
	}
	cout<<"prime"<<"\n";
	fflush(stdout);
	return 0;
}
