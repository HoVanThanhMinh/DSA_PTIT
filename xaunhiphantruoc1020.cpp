#include<bits/stdc++.h>
using namespace std;
string s;
void sinh(){
	int i=s.size();
	while(i--){
	if(s[i]=='1'){
		s[i]='0';
		break;
		}
		else s[i]='1';	
			}
			}
void in(){
	cout<<s<<endl;
	}
main(){
	int t;
	cin>>t;
	while(t--){
		cin>>s;
		sinh();
		in();
		}
		}
