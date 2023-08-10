//#include <iostream>
//#include <vector>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//void backtrack(vector<string>& names, int k, vector<string>& current) {
//    if (current.size() == k) {
//        for (const string& name : current) {
//            cout << name << " ";
//        }
//        cout << endl;
//        return;
//    }
//
//    for (int i = 0; i < names.size(); ++i) {
//        if (find(current.begin(), current.end(), names[i]) == current.end()) {
//            current.push_back(names[i]);
//            backtrack(names, k, current);
//            current.pop_back();
//        }
//    }
//}
//
//int main() {
//    int N, K;
//    cin >> N >> K;
//
//    vector<string> names(N);
//    for (int i = 0; i < N; ++i) {
//        cin >> names[i];
//    }
//
//    sort(names.begin(), names.end());
//
//    vector<string> current;
//
//    backtrack(names, K, current);
//
//    return 0;
//}
#include<bits/stdc++.h>
#define mod              1000000007
#define ll               long long
#define	p(x)             pair<x,x>
#define v(x)             vector<x>
#define tree             node*
#define sz(a)            a.size()
#define f                first
#define s                second
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
	int n, k; cin >> n >> k;
	v(string) M(n); cin(M, n);
	sort(all(M));
	M.erase(unique(all(M)), M.end());
	n = sz(M);
	string s = string(k, '0') + string(n - k, '1');
	do {
		FOR(i, 0, n)if (s[i] == '0')cout << M[i] << " ";
		cout << endl;
	} while (next_permutation(all(s)));

}