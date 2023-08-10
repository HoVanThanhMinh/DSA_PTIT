#include <iostream>
#include <string>
 
using namespace std;
 
void no_repetitions(char *s)
{
    int k;
    int i;
 
    if(s==NULL) return; //safe code
 
    //way doi voi truong hop nho. doi voi truong hop lon thi ta nen xay hash tab
    for(i=0,k=0;s[i];i++)
    {
        int flag=1;
        for(int j=0;j<i;j++) if (s[i]==s[j]) flag=0;
        if (flag) s[k++]= s[i];
    }
    s[k]=NULL;
}
 
void main()
{
    char s[100]="aabbccddee";
    no_repetitions(s);
    cout<<s<<"\n";
    system("pause");
}
