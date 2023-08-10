#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;
int main(){
	int t;cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		vector <int> M(n);
		for(int i=0;i<n;i++) {
		cin>>M[i];
	    }
		if(M[0] > k) cout<<-1<<endl;
		else {
			int pos=upper_bound(M.begin(),M.end(),k)- M.begin();
			cout<<pos<<endl;
		}
	}
}