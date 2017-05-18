#include<bits/stdc++.h>
using namespace std;
int main() {

	int n, k;
	cin>>n>>k;
    int a[n],b[n];
	for (int i = 0; i < n; i++)cin>>a[i];
	for (int i = 0; i < n; i++)cin>>b[i];
	int temp = n,count,i;
	for (i = 1; i < n; i++) {

		int ta = a[i];

		a[i] = min(a[i - 1] + a[i], b[i - 1] + b[i] + a[i]);
		b[i] = min(b[i - 1] + b[i], a[i - 1] + ta + b[i]);

		if ( min(a[i],b[i])>k ) {
			break;
		}
    }

	if ( i != n ) {
		temp = i;
		count = min(a[i - 1], b[i - 1]);
	}
	else {
		temp = n;
		count = min(a[n - 1], b[n - 1]);
	}

	cout<<temp<<" "<<count<<endl;
}
