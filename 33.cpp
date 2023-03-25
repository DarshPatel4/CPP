//This program is performed by 22CS051_DARSH
#include<iostream>
using namespace std;
int main()
{
    int x, n;
    cout << "This program is performed by Darsh_22CS051" << endl;    
	cout << "Enter : ";
	cin >>n;
    int *arr = new int(n);
	cout << "Enter " << n << " array : " << endl;
    	for (x = 0; x < n; x++) {
		cin >> arr[x];
        }
        for (int x = 0; x < n; x++) {
        arr[x] += 2;
    }
	cout << "After adding 2 : ";
	for (x = 0; x < n; x++) {
		cout << arr[x] << " ";
	}
    delete [] arr;
	return 0;
}
