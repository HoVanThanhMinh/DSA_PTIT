#include<iostream>
#include<stack>
#include<string>
using namespace std;
string numberID(const string& s){
	string result;
	stack<int> str;
	for(int i=0;i<=s.length();i++){
		str.push(i+1);	
    if(i==s.length() || s[i]=='I'){
    	while(!str.empty()){
    		result+= to_string(str.top());
    		str.pop();
		}
	}
	}
	return result;
}
int main(){
	int t;cin>>t;
	while(t--){
		string s; cin>>s;
		string kq= numberID(s);
		cout<<kq<<endl;
	}
}

