#include<bits/stdc++.h>
#include<vector>
#include<set>
using namespace std;
bool ok;
void sinh(int* M, int n, int k) {
	int a = 0;
	for (int i = k; i >= 1; i--) {
		if (M[i] != n - k + i) {
			a = 1;
			M[i]++;
			for (int j = i + 1; j <= k; j++)M[j] = M[j - 1] + 1;
			break;
		}
	}
	if (a == 0)ok = true;
}
int main() {
	int n, k; cin >> n >> k;
	int M[100];
	set<int> X;
	vector<int> N;
	for (int i = 0; i < n; i++) {
		cin >> M[i];
		X.insert(M[i]);
	}
	int A[100];
	for (int i = 1; i <= k; i++)A[i] = i;
	for (auto x : X)N.push_back(x);
	n = N.size();
	while (!ok) {
		for (int i = 1; i <= k; i++)cout << N[A[i]-1] << " ";
		cout << endl;
		sinh(A, n, k);
	}
}
