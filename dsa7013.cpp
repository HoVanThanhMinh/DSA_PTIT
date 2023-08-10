#include<iostream>
#include<stack>
#include<string>
using namespace std;

int calc(int a, int b, char c){
	if(c=='*') return a*b;
	if(c=='/') return a/b;
	if(c=='+') return a+b;
	if(c=='-') return a-b;
}
int main(){
	int t;cin>>t;
	while(t--){
		string s;cin>>s;
		stack<int> str;
		for(int i=0;i<s.length();i++){
			if(s[i]>='0' && s[i]<='9') str.push(s[i]-'0');
			else {
				int a=str.top();str.pop();
				int b=str.top();str.pop();
				str.push(calc(b,a,s[i]));
			}
		}
		cout<<str.top()<<endl;
	}
}