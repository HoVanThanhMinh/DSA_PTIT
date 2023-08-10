#include "bits/stdc++.h"
using namespace std;
int n, f[1005];
vector <int> B, C;
int main()
{
	cin >> n;
	for(int i=0;i<n;i++)
	{
		cin >> f[i];
	}
	for(int i=0;i<n;i++)
	{
		if(f[i]%2!=0)
		{
			B.push_back(i); 
		}
		if(f[i]%2==0)
		{
			C.push_back(i); 
		}
	}
	for(int i=0 ; i<B.size()-1;i++)
	{
		for(int j=i+1; j<B.size();j++)
		{
			if(f[B[i]] < f[B[j]])
			{
				swap(f[B[i]],f[B[j]]);
			}
		}
	}
	
	for(int i=0 ; i<C.size()-1;i++)
	{
		for(int j=i+1; j<C.size();j++)
		{
			if(f[C[i]] > f[C[j]])
			{
				swap(f[C[i]],f[C[j]]);
			}
		}
	}
	for(int i=0;i<n;i++) cout << f[i] << " ";
}
