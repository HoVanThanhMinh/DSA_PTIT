#include<iostream>
#include<queue>
#include<string>
using namespace std;

string number(int n){
	queue<string> x;
	x.push("9");
	while(x.size()){
		string s= x.front();
		x.pop();
		if(stoll(s) % n==0) return s;
		x.push(s+'0');
		x.push(s+'9');
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		int n;cin>>n;
		cout<<number(n)<<endl;
	}
}