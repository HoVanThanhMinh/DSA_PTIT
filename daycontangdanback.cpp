#include<bits/stdc++.h>

#define	p(x)             pair<x,x>
#define v(x)             vector<x>
#define sz(a)            a.size()
#define pb(a)            push_back(a)
#define pf(a)            push_front(a)
#define FOR(i,l,r)       for(int i=l;i<r;i++)
#define cin(M,n)         FOR(i,0,n)cin>>M[i]
#define cout(M,n)        FOR(i,0,n)cout<<M[i]<<" "
#define rs(M,x)          memset(M,x,sizeof(M))
#define faster()         cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()            int t; cin >> t; while (t--)
#define all(M)           M.begin(),M.end()
using namespace std;



bool check(v(int) N, int k) {
	if (sz(N) != k)return false;
	FOR(i, 1, k)if (N[i] <= N[i - 1])return false;
	return true;
}

int main() {
	faster();
	int n, k; cin >> n >> k;
	v(int) M(n); cin(M, n);
	int count = 0;
	FOR(i, 0, pow(2, n)) {
		auto s = bitset<20>(i).to_string();
		s = s.substr(20 - n, n);
		v(int) N;
		FOR(i, 0, n)if (s[i] == '1')N.pb(M[i]);
		if (check(N, k))count++;
	}
	cout << count << endl;
}