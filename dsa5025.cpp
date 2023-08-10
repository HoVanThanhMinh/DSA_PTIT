#include<bits/stdc++.h>
using namespace std;

long long F[55];

void tinh()
{
	F[0] = 0; F[1] = 1;//bac 0, bac 1
	F[2] = 2; F[3] = 4;
	for (int i=4; i<=50; i++)
	{
		F[i] = F[i-1] +F[i-2] + F[i-3];
	 } 
}

main()
{
	int t,n;
	cin >> t;
	tinh();
	while(t--)
	{
		cin >> n;
		cout << F[n] << endl;
	}
}
