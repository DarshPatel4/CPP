//This program is performed by 22CS051_DARSH
#include<iostream> 
using namespace std; 
int main() 
{ 
int no1=10, no2=12; 
int & x=no1; 
int & r; //can't declare r directly we should asign any value to r
int & c = NULL;//can't assign NULL  
int & d[2] = {no1,no2}; 
cout<<"x = "<< x+20; 
cout<<"no1="<< no1+10; 
return 0; 
}
