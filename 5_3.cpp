// This program is performed by 22CS051_DARSH
#include<iostream>
using namespace std;
class Currency
{
private:
    int rupee, paisa;
public:
    void enter(){
        cout<<"Enter amount in rupees: ";
        cin>>rupee;
        cout<<"Enter amount in paisa: ";
        cin>>paisa;
        if(paisa>=100){
            rupee += paisa/100;
            paisa %= 100;
        }
    }
    void show(){
        cout<<"Amount: "<<rupee<<"."<<paisa<<endl;
    }
    Currency sum(Currency c){
        Currency temp;
        temp.paisa = paisa + c.paisa;
        temp.rupee = rupee + c.rupee;
        if(temp.paisa>=100){
            temp.rupee += temp.paisa/100;
            temp.paisa %= 100;
        }
        return temp;
    }
    void add(Currency c1, Currency c2){
        paisa = c1.paisa + c2.paisa;
        rupee = c1.rupee + c2.rupee;
        if(paisa>=100){
            rupee += paisa/100;
            paisa %= 100;
        }
    }
};
int main(){
    Currency c1, c2, c3;
    c1.enter();
    c2.enter();
    c3 = c1.sum(c2);
    cout<<"Sum of c1 and c2: ";
    c3.show();
    c3.add(c1, c2);
    cout<<"Sum of c1 and c2: ";
    c3.show();
    cout << "This program is performed by 22CS051_DARSH" << endl;
    return 0;
}