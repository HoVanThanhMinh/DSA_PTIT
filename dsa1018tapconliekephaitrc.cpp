#include<bits/stdc++.h>

#define	p(x)             pair<x,x>
#define v(x)             vector<x>
#define pb(a)            push_back(a)
#define pf(a)            push_front(a)
#define FOR(i,l,r)       for(int i=l;i<r;i++)
#define FORX(i,l,r,x)    for(int i=l;i<r;i+=x)
#define FORD(i,l,r)      for(int i=l;i>=r;i--)
#define correct(x,y,n,m) 0<=(x)&&(x)<(n)&&0<=(y)&&(y)<(m)
#define cin(M,n)         FOR(i,0,n)cin>>M[i]
#define cout(M,n)        FOR(i,0,n)cout<<M[i]<<" "
#define rs(M,x)          memset(M,x,sizeof(M))
#define reset()          FOR(i, 0, 1001)A[i].clear(),check[i]=false
#define faster()         cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()            int t; cin >> t; while (t--)
#define pq(x)            priority_queue<x>
#define neg_pq(x)        priority_queue<x, vector<x>, greater<x>>
#define all(M)           M.begin(),M.end()
using namespace std;





int main() {
	faster();
	run() {
		int n, k; cin >> n >> k;
		v(int) M(k); cin(M, k);
		string s = string(n, '1');
		FOR(i, 0, k)s[M[i] - 1] = '0';
		prev_permutation(all(s));
		FOR(i, 0, n)if (s[i] == '0')cout << i + 1 << " ";
		cout << endl;
	}
}