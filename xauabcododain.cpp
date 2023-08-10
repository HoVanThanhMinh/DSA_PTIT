#include <iostream> 
using namespace std; 
char a[100]; int N;
 void SinhXauDauTien()
  { for(int i = 0; i < N; i++) 
  { a[i] = 'A'; } 
  }
void XuatXau()
 { for(int i = 0; i < N; i++)
  { cout <<a[i]; } cout <<" ";
   }
void SinhXauABCoDoDaiN()
	{ SinhXauDauTien();
	 XuatXau(); 
	 for(int i = N - 1; i >= 0; i--)
	 { if(a[i] == 'A') { a[i] = 'B'; for(int j = i + 1; j < N; j++){ a[j] = 'A'; }
	  XuatXau(); i = N;
	   // de i-- thi i = N - 1 //xet ve cuoi day lai tu dau tim a[i] = 'A' va // doi nhung phan tu phia sau thanh B 
	   } } } 
	   int main() 
	   {
	    int T; cin >> T;
	    for(int i = 0; i < T; i++) 
		{ cin >> N; 
		SinhXauABCoDoDaiN(); cout <<endl; }
		 return 0;
		  }
		  
