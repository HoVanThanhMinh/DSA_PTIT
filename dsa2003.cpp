#include<iostream>
#include<vector>
#include<string>

using namespace std;
int n;
int M[100][100];
vector<string> S;
void Try(int x, int y, string s) {
	if (x >= n || y >= n)return;
	if (M[x][y] == 0)return;
	if (x == n - 1 && y == n - 1) {
		S.push_back(s);
		return;
	}
	Try(x + 1, y, s + "D");
	Try(x, y + 1, s + "R");
}
int main(){
	int t;cin>>t;
	while (t--){
    cin>>n;
	for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cin>>M[i][j];
			}
		}
		Try(0,0,"");
		if(S.size()==0) cout<<-1<<endl;
		else {
			for (auto c: S) cout<<c<<" ";
			cout<<endl;
		}
	}
}
