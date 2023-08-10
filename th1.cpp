#include<bits/stdc++.h>
using namespace std;
int a[16],n,k;
void out(){
	for(int i=1;i<=k;i++) cout<<a[i]<<" ";
	cout<<endl;
	}
void quaylui(int i){
	for(int j=n-k+i;j>=a[i-1]+1;j--){
		a[i]=j;
		if(i==k) out();
		else quaylui(i+1);
		}
		}
	
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n>>k;
	    quaylui(1);
		cout<<endl;
		}
		return 0;
		}
