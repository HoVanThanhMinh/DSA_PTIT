#include<bits/stdc++.h>
using namespace std;
int n=8, B[25];
void in() {
	for(int i=1;i<=n;i++){
		cout << B[i];
		if(i==2 ||i==4)
			cout << "/";
			cout << endl;
			}
}
int kiemtra(){
	if(B[1]==0 && B[2]==0) return 0;
	if(B[3]!=0) return 0;
	if(B[5]==0) return 0;
	return 1;
}

void quaylui(int i){
	int j;
	for(j=0;j<=1;j++)
{
	if(j==1) B[i]==2;
	else B[i]=0;
	if(i==n){
		if(kiemtra()) in();
		}
		else quaylui(i+1);
		}
		}
int main(){
	cin>>n;
	quaylui(1);
	}
	
	
			
	
