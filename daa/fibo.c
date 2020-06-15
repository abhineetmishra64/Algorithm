#include<stdio.h>

//calculates the fibonacci number recursively

int fibo(int n) {
if(n<=1)
return n;
else
return fibo(n-1) + fibo(n-2);
}

/* the main function() */
int main () {

int n;

printf("Enter the term : ");
scanf("%d",&n);

printf("%dth fibonacci number is : %d\n", n,fibo(n));

return 0;
}
