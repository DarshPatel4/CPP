#include<iostream> 
using namespace std; 
int main() 
{ 
    int a,b; 
    a = (b = 50) +10; 
cout<<"a = "<<a<<endl; 
cout<<"b = "<<b<<endl; 
float x=23.4; 
cout.fill('*'); 
cout.width(10); 
cout<<x<<endl; float y=54.4; 
cout.setf(ios::showpos); 
cout<<y<<endl; 
return 0; 
} 
