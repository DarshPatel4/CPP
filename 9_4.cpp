#include<iostream>
using namespace std;
class media
{
    public:
    string title;
    float price;
public:
    media(string x,float y)
    {
        title=x;
        price=y;
    }
    virtual void display()
    {
        cout<<title<<endl;
        cout<<price<<endl;
    }
};
class book:public media
{
    int page_count;
    public:
    //constructor in the derived class
    book(string s,float z,int p_c):media(s,z)
    {
        page_count=p_c;
    }
    void display()
    {
    cout<<"*   outcome of the class book   *"<<endl;
    cout<<endl;
    cout<<"title :"<<title<<endl;
    cout<<"price:"<<price<<endl;
    cout<<"page count :"<<page_count<<endl;
    }
};
class tape:public media
{
    public:
    int play_time;
    //constructor in the derived class
    tape(string k,float z,float p_t):media(k,z)
    {
      play_time=p_t;
    }
    void display()
    {
        cout<<"*   outcome of the class tape   *"<<endl;
        cout<<endl;
        cout<<"title :"<<title<<endl;
        cout<<"price:"<<price<<endl;
        cout<<"play time in minute:"<<play_time<<endl;
    }
};
int main()
{
 tape g("s chand",345.67,40.20);
 book b("Atomic Habits",350.56,270);
 tape *p;//declaring the pointer to the objectS
 book *q;
 p=&g;
 p->display();
 cout<<endl;
 cout<<"----------------------------------"<<endl;
 q=&b;
 q->display();
 cout<<endl;
 cout<<"This program is performed by 22CS051_DARSH"<<endl;
 return 0;
}
