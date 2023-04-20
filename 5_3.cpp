// This program is performed by 22CS051_DARSH
#include<iostream>
using namespace std;
class Currency
{
private:
    int rupee, paisa; // private data members rupee and paisa
public:
    void enter(){ // member function to enter values for rupee and paisa
        cout<<"Enter amount in rupees: ";
        cin>>rupee;
        cout<<"Enter amount in paisa: ";
        cin>>paisa;
        if(paisa>=100){ // if paisa is greater than or equal to 100, convert it to rupees
            rupee += paisa/100;
            paisa %= 100;
        }
    }
    void show(){ // member function to display the amount in rupees and paisa
        cout<<"Amount: "<<rupee<<"."<<paisa<<endl;
    }
    Currency sum(Currency c){ // member function to sum two Currency objects and return a new Currency object
        Currency temp; // create a temporary Currency object to store the sum
        temp.paisa = paisa + c.paisa; // add paisa of the current object and the passed object
        temp.rupee = rupee + c.rupee; // add rupee of the current object and the passed object
        if(temp.paisa>=100){ // if paisa of the sum is greater than or equal to 100, convert it to rupees
            temp.rupee += temp.paisa/100;
            temp.paisa %= 100;
        }
        return temp; // return the sum as a new Currency object
    }
    //member function to add two Currency objects and store the result in the current object
    void add(Currency c1, Currency c2){ 
        paisa = c1.paisa + c2.paisa; // add paisa of the two objects
        rupee = c1.rupee + c2.rupee; // add rupee of the two objects
        if(paisa>=100){ // if paisa of the sum is greater than or equal to 100, convert it to rupees
            rupee += paisa/100;
            paisa %= 100;
        }
    }
};
int main(){
    Currency c1, c2, c3; // create three Currency objects
    c1.enter(); // enter values for c1
    c2.enter(); // enter values for c2
    c3 = c1.sum(c2); // sum c1 and c2 using sum() function and store the result in c3
    cout<<"Sum of c1 and c2: ";
    c3.show(); // display the sum of c1 and c2
    c3.add(c1, c2); // add c1 and c2 using add() function and store the result in c3
    cout<<"Sum of c1 and c2: ";
    c3.show(); // display the sum of c1 and c2
    cout << "This program is performed by 22CS051_DARSH" << endl;
    return 0;
}