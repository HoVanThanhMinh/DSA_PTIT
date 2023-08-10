#include<bits/stdc++.h>
using namespace std;
main(){
	int t,i,M;string s;
	cin>>t;
	while(t--){
		cin>>s;
		int a['z'+1]={ };
		for(i=0;i<s.size();i++)a[s[i]]++;
		M=*max_element(a+'a',a+'z');
		if(M>s.size() -M+1) cout<<-1<<endl;
		else cout<<1<<endl;	
	}
}
