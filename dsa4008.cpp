#include<bits/stdc++.h>
using namespace std;
int m=1e9+7;
struct Matran{
	long long f[2][2];
};
Matran operator*(Matran A, Matran B){
	Matran C; int i,j,k;
	for(i=0;i<=1;i++){
		for(j=0;j<=1;j++){
			C.f[i][j]=0;
			for(k=0;k<=1;k++)
				C.f[i][j]= (C.f[i][j]+A.f[i][k]*B.f[k][j]%m)%m;
		}
	}
	return C;
}
Matran powMod(Matran A, int n){
	if(n==1) return A;
	Matran X=powMod(A,n/2);
	if(n%2==0) return X*X;
	return A*X*X;
}
main(){
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;
		Matran A;
		A.f[0][0]=1; A.f[0][1]=1; A.f[1][0]=1; A.f[1][1]=0;
		Matran KQ=powMod(A,n);
		cout<<KQ.f[1][0]<<endl;
	}
}
