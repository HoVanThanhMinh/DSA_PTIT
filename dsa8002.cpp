#include<iostream>
#include<queue>
#include<stack>

using namespace std;
int main(){
	int n; cin>>n;
	queue<int> A;
	while(n--){
	string s;
	cin>>s;
	if(s=="PUSH"){
		int x; cin>>x;
		A.push(x);
		}
	if(s=="PRINTFRONT") 
	{ 
	if(A.size()==0) cout<<"NONE" <<endl;
	else cout << A.front() <<endl;
	}
	if(s=="POP" && A.size()>0)
	{
		A.pop(); 
	}
	}
}