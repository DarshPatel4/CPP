#include<iostream> 
using namespace std; 
int main() 
{ 
char name[20]; 
cout<<"Enter first name then white space and then last name of a person: "; cin>>name; 
cout<<"Person Name : "<<name<<endl; 
cout<<"Enter first name then white space and then last name of a person: "; 
cin.getline(name,10); 
cout.write(name,7); 
cout<<endl;
cout<<"Again Enter first name then white space and then last name of a person: "; cin.getline(name,13); cout.write(name,11); 
return 0; } 
