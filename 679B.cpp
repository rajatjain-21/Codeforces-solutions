#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

pair<ll,ll> best;

ll my_pow(ll x) { return x * x * x; }

void rec(ll m, ll steps, ll subtracted) {
	if(m == 0) {
		best = max(best, make_pair(steps, subtracted));
		return;
	}
	ll x = 1;
	while(my_pow(x+1) <= m) ++x;
	rec(m - my_pow(x), steps+1, subtracted + my_pow(x));
	if(x - 1 >= 0)
		rec(my_pow(x)-1-my_pow(x-1), steps+1, subtracted + my_pow(x-1));
}

int main() {
	ll m;
	scanf("%lld", &m);
	rec(m, 0, 0);
	printf("%I64d %I64d", best.first, best.second);
	return 0;
}
