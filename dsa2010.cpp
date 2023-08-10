#include<bits/stdc++.h>
using namespace std;
int n,c[50],a[50],ok,x;
void in(int m){
	cout <<"[";
	for(int i=1;i<m;i++) cout<<c[i]<<" ";
	cout<<c[m]<<"]";
}
void quaylui(int i,int s){
int j;
for(j=1;j<=n;j++){
	if(a[j]>=c[i-1]&&s+a[j]<=x){
	c[i]=a[j];
	s=s+a[j];
	if(s==x){
		ok=1;in(i);
	}
	else quaylui(i+1,s);
	s=s-a[j];
	}	
	}
	}


main(){
	int t,i;
	cin>>t;
	while(t--){
		cin>>n>>x;
		for(i=1;i<=n;i++) cin>>a[i];
		c[0]=0;ok=0;
		quaylui(1,0);
		if(ok==0) cout<< -1;
		cout<<endl;
	}
}
