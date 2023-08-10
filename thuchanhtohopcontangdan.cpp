#include<bits/stdc++.h>
#include<vector>
#include<set>
#include<string>
#include<algorithm>
using namespace std;
int n;
bool haha = false;
vector<string> S;
bool ktra(vector<int> M, int n,int*N) {
	int i,cnt=0;
	vector<int> K;
	for (i = 0; i < n; i++)
		if (N[i] == 1)K.push_back(M[i]);
	if (K.size() < 2)return false;
	for (i = 1; i <K.size(); i++)
		if (K[i] <= K[i - 1])return false;
	return true;
}
void sinh(int*M,int n) {
	int i,j,a = 0;
	for (i = n - 1; i >= 0; i--) {
		if (M[i] == 0) {
			a = 1;
			M[i] = 1;
			for (j = i + 1; j < n; j++)M[j] = 0;
			break;
		}
	}
	if (a == 0) haha = true;
}
int main() {
	cin >> n;
	vector<int> M(n);
	for (int i = 0; i < n; i++)cin >> M[i];
	int N[100] = { 0 };
	while (!haha) {
		if (ktra(M, n,N)) {
			string s="";
			for (int i = 0; i < n; i++) {
				if (N[i] == 1) s += to_string(M[i]) + " ";
			}
			S.push_back(s);
		}
		sinh(N, n);
	}
	sort(S.begin(), S.end());
	for (string s : S)cout << s << endl;
}
