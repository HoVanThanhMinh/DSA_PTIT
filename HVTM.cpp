#include <stdio.h>
#include <conio.h>
void swap(int &m, int &n){
	int temp = m;
	m=n;
	m = temp;
}

int main(){
	int n;
	int k,j,h, a[5000];
	scanf("%d", &n);
	for(int i=1; i<=n; i++){
	scanf("%d", a[i]);
}
	for(int i=1; i<=n;i++){
	   for(int j=n;j>=1;j--){
	if(a[i]=!a[j]){
	swap(a[i],a[j]);
		h++;
		if(h==1){
		
		printf("%d", '0');
	}
		
	} else if(a[i]==a[j]){
		a[j]= a[i]-1;
		swap(a[i], a[j]);
		k++;
		printf("%d", k);
	}
}
}
}