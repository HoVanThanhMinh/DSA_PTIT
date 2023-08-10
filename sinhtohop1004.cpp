#include<bits/stdc++.h>
using namespace std;
int n,k,a[16];
void out(){
	for(int i=1;i<=k;i++)
	cout<< a[i];cout<<" ";
}
void dequy(int i){
	for(int j=a[i-1]+1;j<=n-k+i;j++){
		a[i]=j;
		if(i==k) out();
		else dequy(i+1);
	}
}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
		dequy(1);
		cout<<endl;
	}
	return 0;
}
