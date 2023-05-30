#include<iostream>
using namespace std;
//create first class//
class alpha
{
private:
  int x;
  public:
//create  parameterized constructor//
  alpha(int k)
  {
      x=k;
  }
  void display()
  {
    cout<<"value of x is:"<<x<<endl;
  }
};
//create second class//
class beta
{
private:
  float y;
public:
//create  parameterized  constructor//
  beta(float k)
  {
    y=k;
  }
  void display()
  {
    cout<<"value of y is:"<<y<<endl;
  }
};
//create third class and inherit first and second class//
class Gamma:public alpha,public beta
{
private:
   int m;
   float n;
public:
//create parameterized constructor//
   Gamma(int c,float d,int a,float b):alpha(a),beta(b)
   {
      m=c;
      n=d;
   }
   void print()
   {
       cout<<"value of m is:"<<m<<endl;
       cout<<"value of n is:"<<n<<endl;
   }
};
int main()
{
//create object and pass values in parameter//
    Gamma g(12,4.5,14,6.7);
    g.print();
    g.alpha::display();
    g.beta::display();
    cout<<endl;
    cout<<"This program is performed by 22CS051_DARSH"<<endl;
    return 0;
}