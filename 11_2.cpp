#include<iostream>
#include<fstream>
#include<cstdio>
#include<iomanip>
using namespace std;
class student
{
    float height;
    char name[50];
public:
    void setData()//function for input data
    {
        cout<<"\nEnter height of the student : ";
        cin>>height;
        cout<<"Enter name of student : ";
        cin>>name;
    }
    void showData()//function for output data//
    {
        cout<<"\nHeight of the student : "<<setprecision(2)<<height;
        cout<<"\nStudent Name : "<<name;
    }
};
//function to write in a binary file//
void write_record()
{
    ofstream outFile;
    outFile.open("student.dat",ios::binary);
    student obj;
    obj.setData();
    outFile.write((char*)&obj,sizeof(obj));
    outFile.close();
}
//function to display records of file//
void display()
{
    ifstream inFile;
    inFile.open("student.dat",ios::binary);
    student obj;
    while(inFile.read((char*)&obj,sizeof(obj)))
    {
        obj.showData();
    }
    inFile.close();//destroy the file//
}
int main()
{
   for(int i=1;i<=2;i++)
   {
       write_record();//function call//
       cout<<"\nList of record :-";
       display();
       cout<<"\n";
   }
    cout<<"\nThis program is performed by 22CS051_DARSH"<<endl;
   return 0;
}