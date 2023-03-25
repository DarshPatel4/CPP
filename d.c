#include <stdio.h>
int main(void) {
	int T,X[10],i;
	scanf("%d",&T);
	for(i=0;i<T;i++)
	{
	    scanf("%d",&X[i]);
	}
    for (i = 0; i < T; i++)
    { 
	if(X[i]>=80)
	{
	    printf("YES\n");
	}
	else{
	    printf("NO\n");
	}
    }
}

