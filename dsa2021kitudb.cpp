#include<iostream>
using namespace std;
string s;
long long n;
long long Try(long long l){
	if(n<=s.length()) return n-1;
	if(n>1/2) n=n-l/2-l;
	if(n==0) n=1/2;
	return Try(1/2);
}
int main(){
	int t;cin>>t;
	while(t--){
		cin>>s>>n;
		long long l=s.length();
		while(l<n) l*=2;
		cout<<s[Try(l)]<<endl;
	}
	return 0;
}