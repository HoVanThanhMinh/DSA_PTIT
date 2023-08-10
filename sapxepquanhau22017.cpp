#include<bits/stdc++.h>
using namespace std;
int a[20],b[20],n, xuoi[20],nguoc[20],kq,c[10][10];
void capnhat(){
	int i,j,t=0;
	for(i=1;i<=n;i++)
	t = t + c[i][a[i]];
	kq=max (kq,t);
}
void quaylui(int i){
	int j;
	for(j=1;j<=n;j++){
		if(b[j]==0 && xuoi[i-j+n]==0&& nguoc[i+j-1]==0){
			a[i]=j;
			b[j]=1;xuoi[i-j+n]=1;nguoc[i+j-1]=1;
			if(i==n) capnhat();
			else quaylui(i+1);
			b[j]=0; xuoi[i-j+n]=0;nguoc[i+j-1]=0;
		}
	}
}
main(){
	int t;
	cin>> t;
	while(t--){
		n=8,kq=0;
		for(int i=0;i<20;i++){
			b[i]=0;xuoi[i]=0;nguoc[i]=0;
		}
		for(int i=1;i<=n;i++)
		for(int j=1;j<=n;j++)
		cin>>c[i][j];
		quaylui(1);
		cout << kq << endl;
	}
}
