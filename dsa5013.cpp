#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;

int tinh(int n, int k){
	int f[100005]={0};
	f[0]=1;f[1]=1; 
	for(int i=2;i<=n;i++){
	for(int j=1;j<=min(i,k);j++){
		
	 f[i]=(f[i]+f[i-j])%m;
	}
	}
	return f[n];
	}
main(){
int t,n,k;cin>>t;

	while(t--){
		cin>>n>>k;
		cout<<tinh(n,k)<<endl;
		}
		}
