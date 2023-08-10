#include<bits/stdc++.h>
using namespace std;
int tinh(int n,int x,int y, int z){
	int f[105]={0},i;
	f[1]=x;
	for(i=2;i<=n;i++){
		if(i%2==0)
		f[i]=min(f[i-1]+x,f[i/2]+z);
		else
		f[i]=min(f[i-1]+x,f[(i+1)/2]+z+y);
		}
		return f[n];
		}
main(){
	int n,x,y,z,t;
	cin>>t;
	while(t--){
		cin>>n>>x>>y>>z;
		cout<<tinh(n,x,y,z)<<endl;
		}
		}
	
