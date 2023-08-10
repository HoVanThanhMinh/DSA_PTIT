#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(){
	int t, n, a[1000], sum;
	cin >> t;
	while (t--){
		cin >> n;
		sum=0;
		for (int i=0; i<n;i++){
			cin >> a[i];
		}
		for(int i=0; i<n; i++)
		{
		if(a[i] == 0)
		{
			sum ++;
			}	
		else{
			break;
		}
		}
		if(sum == 0){
			cout << 0;
		}
		else {
			cout << sum;
		}
		cout << endl;
	}
	return 0;
}
