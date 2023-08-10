#include<bits/stdc++.h>
using namespace std;
int c[20][20],n,a[20],b[20],fopt=1e9,x[20],cmin=1e9,cost=0;
void quaylui(int i){
	int j;
	for(j=2;j<=n;j++){
		if(b[j]==0){
			a[i]=j;b[j]=1;
			cost=cost+c[a[i-1]][a[i]];
			if(i==n){
				int v=cost+c[a[n]][a[1]];
				fopt=min(fopt,v);
				}
				else if(cost+ cmin*(n-i+1)<fopt){
					quaylui(i+1);
					}
				cost=cost-c[a[i-1]][a[i]];
				b[j]=0;
				}
				}
				}
main(){
	int i,j; cin>>n;
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			cin>>c[i][j];
			if(i!=j) cmin=min(cmin,c[i][j]);
		}	
	}
	a[1]=1;
	quaylui(2);
	cout<<fopt<<endl;
	}
