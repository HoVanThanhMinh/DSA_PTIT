#include<bits/stdc++.h>
using namespace std;
int c[30][30],n,A[30],B[30]={0},fopt=1e9,X[30],cmin=1e9,cost=0;
int dem(string s1,string s2){
	int i=0,j=0,d=0;
	while(i<s1.size()&&j<s2.size()){
		if(s1[i]==s2[j]){i++;j++;d++;}
		else if(s1[i]<s2[j]) i++;
		else j++;
		}
	return d;
}
void quaylui(int i){
	int j;
	for(j=1;j<=n;j++){
		if(B[j]==0){
			A[i]=j;B[j]=1;
			cost=cost+c[A[i-1]][A[i]];
			if(i==n){
				fopt=min(fopt,cost);
			}
			else if(cost + cmin*(n-i+1)<fopt){
				quaylui(i+1);
			}
			cost=cost-c[A[i-1]][A[i]];
			B[j]=0;
		}
	}
}
main(){
	int i,j;
	vector<string> vs;
	string tmp;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>tmp;
		vs.push_back(tmp);
	} 
	for(i=1;i<=n;i++){
		for(j=1;j<=n;j++){
			if(i==j) c[i][j]=1e9;
			else c[i][j]=dem(vs[i-1],vs[j-1]);
			cmin=min(cmin,c[i][j]);
		}
	}
	quaylui(1);
	cout<<fopt<<endl;
}
