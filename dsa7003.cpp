#include<iostream>
#include<stack>
#include<string>
using namespace std;

char priority(char c){
	if(c=='+' || c=='-') return 1;
    if(c=='*' || c=='/') return 2;
    if(c=='^' || c=='%') return 3;
    return 0;
}
int main(){
	int t;cin>>t;
	while(t--){
		string s; cin>>s;
		stack <char> str;
		for(auto c: s){
			if(c>='A' && c<='Z'||c>='a' && c<='z') cout<<c;
			else if(c=='(') str.push(c);
			else if(c==')'){
				while(str.size() && str.top() !='('){
					cout<< str.top();
					str.pop();
				}
				str.pop();
			}
			else {
				while(str.size() && priority(str.top()) >= priority(c)){
				     cout<<str.top();
					 str.pop();	
				}
				str.push(c);
			}
		}
		while(str.size()){
			if(str.top()== '(') str.pop();
			else {
				cout << str.top();
				str.pop();
			}
		}
		cout<<endl;
	}
}
