//string

//strcmp() string.h

#include <iostream>
#include <string.h>
using namespace std;
int main()
{
 char a1[] = "SATU";
 char a2[] = "satu";
 char b1[] = "SATU";
//clrscr();

 cout<<"Hasil Perbandingan "<<a1<<" dan "<<a2<<"->";
 cout<<strcmp(a1,a2)<<endl; //karakternya berbeda, -1
 
 cout<<"Hasil Perbandingan "<<a2<<" dan "<<a2<<"->";
 cout<<strcmp(a2,a1) <<endl; //karakternya sama
 
 cout<<"Hasil Perbandingan "<<a1<<" dan "<<b1<<"->";
 cout<<strcmp(a1,b1) <<endl; //capslock, 0
 getchar();
}
