#include<bits/stdc++.h>
using namespace std;
int n,A[15],B[15]={0},s;
void in(){
	for(int i=1;i<=n;i++)
	cout << s[A[i]-1] ;
	cout << " ";
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
int t,i;
cin>>t;
while(t--){
	cin>>s;
	n=s.length();
	for(int i=0;i<=n;i++)
	quaylui(1);
	cout<< endl;
		}
		}
