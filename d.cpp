#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int T,squat[1000],B[1000];
	cin >> T;
	while(T--){
	    cin >> squat[T];
	    B[T]=15*squat[T];
	    cout << B[T] << endl;
	}
	return 0;
}
