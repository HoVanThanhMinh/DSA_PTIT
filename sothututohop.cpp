#include<bits/stdc++.h>
using namespace std;
int C[20], A[20], n, k, dem;
int kiemtra(){
	int i;
	for(int i=0;i<=k;i++)
		if(C[i]!=A[i]) return 0;
		return 1;		
		
	}
void quaylui(int i){
	int j;
	for (j=C[i-1]+1;j<=n-k+i;j++){
		C[i]==j;
		if(i==k){
			dem++;
			if(kiemtra()) {cout << dem << endl; break;
			}
		}
			else quaylui(i+1);
		
	}
}
main(){
	int t, i;
	cin >> t;
	while(t--){
		cin >> n >> k;
		for(int i=1;i<=k;i++)
			cin >> A[i];
			C[0]=0; dem=0;
			quaylui(1);
		}
	}
	

