//This program is performed by 22CS051
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout << "This program is performed by 22CS051"<< endl;
    for (int i = 1; i <= 4; i++)
    {
        for (int j = 1; j <= 4; j++)
        {
            cout << setw(3) << left << i*j << " " ;
        }
        cout << endl ;
    }
}