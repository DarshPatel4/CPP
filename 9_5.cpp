#include<iostream>
using namespace std;
class vehicle
{
//abstract class
    float average;
    public:
    virtual void getdata()
    {
      cin>>average;
    }
    virtual void putdata()
    {
        cout<<"Average of the vehicle: "<< average<<endl;
    }
};
//public inheriting the abstract class
class car:public vehicle
{
    string fuel_type;
    int no_of_wheels;
    public:
    void getdata()
    {
        cout<<"Enter fuel type of car: ";
        cin>>fuel_type;
        cout<<"Enter number of wheels : ";
        cin>>no_of_wheels;
    }
    void putdata()
    {
      cout<<"Fuel type of Car: "<<fuel_type<<endl;
      cout<<"Number of wheels in car: "<< no_of_wheels<<endl;
    }
};
//public inheriting the abstract class
class truck:public vehicle
{
    string fuel_type;
    int no_of_wheels;
    public:
    void getdata()
    {
        cout<<"enter fuel type of Truck: ";
        cin>>fuel_type;
        cout<<"enter number of wheels in truck : ";
        cin>>no_of_wheels;
    }
    void putdata()
    {
      cout<<"Fuel type of Car: "<<fuel_type<<endl;
      cout<<"Number of wheels in car: "<< no_of_wheels<<endl;
    }
};
int main()
{
    car *p1;
    //declaring the pointer to the object of the class car
    car c;
    p1=&c;
    //function calling using pointer//
    p1->getdata();
    truck *p2;
    truck t;
    p2=&t;
     //function calling using pointer//
    p2->getdata();
    cout<<endl;
    cout<<"***Data of the car***"<<endl;
    p1->putdata();
    cout<<endl;
    cout<<"***Data of the truck***"<<endl;
    p2->putdata();
    cout<<endl;
    cout<<"This program is performed by 22CS051_DARSH"<<endl;
   return 0;
}