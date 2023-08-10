#include<iostream>
#include<string>
using namespace std;
int n; string s;

void out(){
	for(int i=0;i<n;i++)
		cout<<s[i];cout<<" ";
	
}
void Try(int i){
	for(int j=0;j<=1;j++){
		s[i]=j+'A';
	if(i==n-1) out();
	else Try(i+1);
}
}
int main(){
	int T;cin>>T;
	while(T--){
		cin>>n;
		Try(0);
		cout<<endl;
	}
	return 0;
}