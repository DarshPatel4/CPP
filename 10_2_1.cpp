#include<iostream>
#include<iomanip>
using namespace std;
ostream&curr(ostream&ostrobj)
{
    cout<< fixed << setprecision(2);
    cout<<"Rs. ";
    return ostrobj;
}
int main()
{
   float amt=10.5478;
   cout<<curr<<amt<<endl;
   cout<<"This program is performed by 22CS051_DARSH";
}