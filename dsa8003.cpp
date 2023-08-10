#include<iostream>
#include<queue>
#include<stack>
using namespace std;

int main(){
	int n;cin>>n;
	deque <int> A;
	while(n--){
		string s; cin>>s;
		if(s=="PUSHFRONT"){
			int x;cin>>x;
			A.push_front(x);
		}
		if(s=="PRINTFRONT"){
			if(A.size()==0) cout<<"NONE"<<endl;
			else cout << A.front() <<endl;
		}
		if(s=="POPFRONT" && A.size()>0){
			A.pop_front();
		}
		if(s=="PUSHBACK"){
			int b;cin>>b;
			A.push_back(b);
		}
		if(s=="PRINTBACK"){
			if(A.size()==0)cout<<"NONE"<<endl;
			else cout<<A.back()<<endl;
		}
		if(s=="POPBACK" && A.size()>0){
			A.pop_back();
		}
		
	}
}