#include<bits/stdc++.h>
#define v(x)             vector<x>
#define sz(a)            a.size()
#define f                first
#define s                second
#define pb(a)            push_back(a)
#define pf(a)            push_front(a)
#define FOR(i,l,r)       for(int i=l;i<r;i++)
#define cin(M,n)         FOR(i,0,n)cin>>M[i]
#define cout(M,n)        FOR(i,0,n)cout<<M[i]<<" "
#define faster()         cin.tie(0); ios_base::sync_with_stdio(false); cout.tie(0);
#define run()            int t; cin >> t; while (t--)
#define all(M)           M.begin(),M.end()
using namespace std;



int n;
int M[20][20];
v(int) A[1001];
bool check[1001];
int res = INT_MAX;
void DFS(int u, int sum, int par, int count) {
	if (sum >= res)return;
	check[u] = true;
	for (auto x : A[u]) {
		if (!check[x])DFS(x, sum + M[u][x], u, count + 1);
		else if (x == 1 && x != par && count == n)res = min(res, sum + M[u][1]);
	}
	check[u] = false;
}

int main() {
	faster();
	cin >> n;
	FOR(i, 1, n + 1)FOR(j, 1, n + 1)cin >> M[i][j];
	FOR(i, 1, n + 1)FOR(j, 1, n + 1) if (i != j) A[i].pb(j);
	DFS(1, 0, 0, 1);
	cout << res << endl;
}