#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
main(){
	int n,t,a; cin>>t;
	while(t--){
		cin>>n;
		priority_queue<long long,vector<long long>,greater<long long> > q;
		for(int i=0;i<n;i++){
			cin>>a;
			q.push(a);
		}
		long long kq=0;
		while(q.size()>=2){
			long long x=q.top();q.pop();
			long long y=q.top();q.pop();
			long long tong=(x+y)%m;
			q.push(tong);
			kq=(kq+tong)%m;
		}
		cout<<kq<<endl;
	}
}
