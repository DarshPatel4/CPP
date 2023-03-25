//This program is performed by 22CS051_DARSH
#include<iostream> 
#include<conio.h> 
using namespace std;
int m=30; 
int main() 
{ 
    int m=20; 
        { 
            int m=10; 
            cout<<"we are in inner block"<<endl; 
            cout<<"value of m="<<m<<"\n"; 
            cout<<"value of ::m="<<::m<<"\n"; 
        } 
            cout<<"we are in outer block"<<endl; 
            cout<<"value of m="<<m<<"\n"; 
            cout<<"value of ::m="<<::m<<"\n";
            cout << "This program is performed by 22CS051_DARSH"<< endl; 
            getch(); 
            return 0; 
}