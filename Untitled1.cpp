#include <iostream>
using namespace std;

int main()
 {
	// your code goes here
	int T,A,B[1000],i,sum=0,r[100],u=0;
	cin >> T;
	while (T--)
   {
	    cin >> A;
        sum=0;
	    for(i=0;i<A;i++)
        {
	        cin >> B[i];
	        if(B[i]>=1000)
	        {
	            sum++;
	        }
	    }
	    r[u]=sum;
	    u++;
	}
	for(int i=0;i<T;i++)
    {
        cout<<r[i]<<endl;
    }
	return 0;
}
