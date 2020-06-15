#include<stdio.h>

//calculates the power of positive base and exponent in O(n) time
int powerN(int base, int exp) {
if(exp<1)
return 1;
else
return base*powerN(base,exp-1);
}

//calculates the power of positive base and exponent in O(Log(n)) time

int powerLn(int base, int exp) {
int tmp;
if(exp<1)
return 1;
tmp=powerLn(base, exp / 2);
if(exp % 2 == 0)
return tmp * tmp;
else {
return base*tmp*tmp;
}
}

/* the main function() */
int main () {

int b,e;

printf("Enter the base and exponent : ");
scanf("%d%d",&b,&e);

//printf("%d ^ %d = %d\n", b,e,powerLn(b,e));
printf("%d ^ %d = %d\n", b,e,powerLn(b,e));

return 0;
}
