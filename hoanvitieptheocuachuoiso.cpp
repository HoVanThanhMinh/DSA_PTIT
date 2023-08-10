#include<bits/stdc++.h>
#define FOR(i,l,r)  for(int i=l;i<r;i++)
#define faster()      cin.tie(0);ios_base::sync_with_stdio(false); cout.tie(0);
#define all(M)      M.begin(),M.end()

using namespace std;
string Sinh(string s){
	FOR(i,1,s.length()) if(s[i]>s[i-1]){
		next_permutation(all(s));
		return s;
	}
	return "BIGGEST";
}
int main(){
	faster();
	int t;cin>>t;
    while(t--){
    	int a;cin>>a;
    	string s;cin>>s;
    	cout<< a << " ";
    	cout<< Sinh(s) <<endl;
	}
}
