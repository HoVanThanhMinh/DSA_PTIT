#include<bits/stdc++.h>
using namespace std;
int n,a[15],check[10];
void out(){
	for(int i=1;i<=n;i++)
	cout<<a[i];
	cout<<" ";
	}
void dequy(int i){
	for(int j=n;j>=1;j--){
		if(check[j]==0)
		{
			check[j]=1;
			a[i]=j;
			if(i==n)
				out();
				else dequy(i+1);
				check[j]=0;
				}
				}
				}
int main(){
	int t;
	cin>>t;
	while(t--){
		cin>>n;
		dequy(1);
		cout<<endl;
		}
		return 0;
		}
