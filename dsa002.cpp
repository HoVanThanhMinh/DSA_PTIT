#include <iostream>
using namespace std;
int a [100], b [100], n, s;
void sinh () {
	for (int i = 0; i <n; i ++) a [i] = 0;
	int c = 0;
	while(1) {
		int sum = 0;
		for (int i = 0; i <n; i ++) {
			sum = sum + a [i] * b [i];
		}
		if (sum == s) {
			c ++;
			for (int i = 0; i <n; i ++) {
				if (a [i] == 1) cout << b [i] << " ";
			}
			cout << endl;
		}
		int i = n - 1;
		while (i>=0 && a [i] == 1) 
		{
		a [i] = 0; 
		i--; 
		}
		if (i <0) {
			cout << c << endl;
			return;
		}
		if (i>= 0) a [i] = 1;
	}
}
int main () {
	cin >> n >> s;
	for (int i = 0; i <n; i ++) cin >> b [i];
	sinh ();
}
