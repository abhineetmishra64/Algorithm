#include <stdio.h>

int main(void) {

	// Define the two integer variables
	int L,R;
	int i;

	// Get L and R from the user
	scanf("%d", &L);
	scanf("%d", &R);

	// Write here the logic to print all integers between L and R

	for(i=L;i<=R;i++){
		printf("%d",i);
	}


	return 0;
}
