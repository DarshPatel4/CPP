//This program is performed by 22CS051_DARSH
#include<iostream>
using namespace std;
class referance{
    public:
    int & tonLarge(int &a, int &b){
        if(a>b)//25>20
        {
            a=100;//a=100,b=20
            return a;
        }
        else{
            b=100;
            return b;
        }
    }
}R;
int main()
{
    int X,Y;
    cout<< "Enter Two numbers ";
    cin >> X >> Y;//user intput
    int &max= R.referance::tonLarge(X,Y);//function call
    cout<< "Number 1 is : "<< X << endl << "Number 2 is : "<< Y<<endl;
    cout<< "This program is performed by 22CS051_DARSH"<<endl;
    return 0;
}