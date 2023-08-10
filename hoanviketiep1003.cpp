#include<bits/stdc++.h>
using namespace std;
void tim(){
	int n;
	cin>>n;
	int a[n+1],i=n,j=n;
	for(int i=1;i<=n;i++) cin>>a[i];
	while(a[i]<a[i-1]&&i>0)
	i--;
	i--;
	if(i<0)
	for(int i=1;i<=n;i++) cout<<i<<' ';
	else {
		while(a[j]<a[i])
		j--;
		swap(a[i],a[j]);
		sort(a+i+1,a+n+1);
		for(int i=1;i<=n;i++)
		cout<<a[i]<<' ';
		}
		cout<<endl;
		}
int main(){
	int t;
	cin>>t;
	while(t--){
		tim();
		}
		return 0;
		}
