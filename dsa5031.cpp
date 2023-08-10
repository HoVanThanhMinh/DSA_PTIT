#include<bits/stdc++.h>
using namespace std;
int f[10005];
void tinh(){
	int i,j;
	for(i=1;i<=10000;i++){
	f[i]=i;
	for(j=1;j<=sqrt(i);j++){
		f[i]=min(f[i],f[i-j*j]+1);
		}
		}
		}
main(){
	int t,n;
	tinh();
	cin>>t;
	while(t--){
		cin>>n;
		cout<<f[n]<<endl;
		}
		}
