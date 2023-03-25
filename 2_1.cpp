//This program is performed by 22CS051_DARSH
#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int intake;
    char cname[100],ccode[100],department[100];
    for (int i = 0; i < 4; i++)
    {
       cout<<"+";
    }
    cout<<" Enter the college Information ";
     for (int i = 0; i < 4; i++)
    {
       cout<<"+";
    }
    cout<< endl;
    cout<<"Name of the college : ";
    cin>>cname;
    cout<<"College code : ";
    cin>>ccode;
    cout<<"Department : ";
    cin>>department;
    cout<<"Department In-take : ";
    cin>>intake;
for (int i = 0; i < 10; i++)
{
    cout<< "*";
}
    cout<<" College Information ";
for (int i = 0; i < 10; i++)
{
    cout<< "*";
}  
    cout<< endl;
    cout<<"Name of the college : "<<cname<<endl;
    cout<<"College University code : "<<ccode<<endl;
    cout<<"Name of Department : "<<department<<endl;
    cout<<"The Department of CSE has In-take : "<<intake<<endl;
    cout << "This program is performed by 22CS051_DARSH"<< endl;
    return 0;
}