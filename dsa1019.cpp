#include<iostream>
using namespace std;
int a[20],n,OK;
bool check(){
	if(a[1]==0||a[n]==1) return 0;
	for(int i=0;i<n;i++){
		if(a[i]&&a[i+1]) return 0;
	}
	return 1;
}
void initslove(){
	int OK=1;cin>>n;
	for(int i=1;i<=n;i++) a[i]=0;
	while(OK==1){
		if(check()){
			for(int i=1;i<=n;i++)
			if(a[i]==0) cout<<"A";
			else cout<<"H";
			cout<<endl;
		}
		int i=n;
		while(i>0&&a[i]!=0){
			a[i]=0;i--;
		}
		if(i>0) a[i]=1;
		else OK=0;
	}
}
int main(){
	int t;cin>>t;
	while(t--){
		initslove();
	}
}