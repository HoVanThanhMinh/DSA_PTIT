#include<bits/stdc++.h>
using namespace std;
int n,a[15],b[15]={0};
int kiemtra(){
	for(int i=1;i<n;i++){
		int t=abs(a[i]-a[i+1]);
		if(t==1) return 0;
	}
	return 1;
}
void in(){
	for(int i=1;i<=n;i++) cout << a[i];
	cout << endl;
}
void quaylui(int i){
	int j;
	for(j=1;j<=n;j++){
		if(b[j]==0){
			a[i]=j;b[j]=i;
			if(i==n){
				if(kiemtra()) in();
			}
			else quaylui(i+1);
			b[j]=0;
		}
	}
}
main(){
	int t,i;
	cin>>t;
	while(t--){
		cin>>n;
		for(i=0;i<=n;i++) b[i]=0;
		quaylui(1);
	}
}
