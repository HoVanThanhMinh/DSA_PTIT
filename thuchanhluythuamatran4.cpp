#include<bits/stdc++.h>
using namespace std;
long long M=1e9+7;
long long n,k;
struct matrix{long long c[15][15];};
matrix multi(matrix a, matrix b){
	matrix temp;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			temp.c[i][j]=0;
			for(int k=0;k<n;k++)
			temp.c[i][j]=(temp.c[i][j]+ a.c[i][k]*b.c[k][j]%M)%M;
			
		}
	}
	return temp;
}
matrix power(matrix a, long long k){
	if(k==1) return a;
	if(k%2==0) return power(multi(a,a),k/2);
	else return multi(a,power(multi(a,a),k/2));
}
void solve(){
	cin>>n>>k;
	int i,j;
	matrix a;
	for( i=0;i<n;i++)
	for( j=0;j<n;j++)
	cin>>a.c[i][j];
	matrix b=power(a,k);
	long long sum=0;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	if(i==0) sum=(sum+b.c[i][j])%M;
	cout<<sum<<endl;
}
int main(){
	int t;
	cin>>t;
	while(t--) solve();
	return 0;
}
