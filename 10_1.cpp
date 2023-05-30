#include<iostream> 
using namespace std; 
int main() 
{ 
char s[12]="ABC_DEF_GHI"; 
cout.write(s,9); 
int x=12345; 
cout.fill('*'); 
cout.width(10); 
cout<<endl<<x; 
return 0; 
} 
