#include<bits/stdc++.h>
using namespace std;
int n,A[15],B[15]={0},X[15];
void in(){
	for(int i=1;i<=n;i++)
	cout<< X[A[i]] << " ";
	cout << endl;
	}
void quaylui(int i){
	int j;
	for(j=1;j<=n;j++){
		if(B[j]==0){
			A[i]=j;
			B[j]=1;
			if(i==n)
			in();
			else quaylui(i+1);
				B[j]=0;
				}
	}
}

main(){
	cin>>n;
	for (int i=1;i<=n;i++)
	cin >> X[i];
	sort(X+1,X+n+1);
	quaylui(1);
		}

