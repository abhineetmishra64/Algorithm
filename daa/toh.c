#include<stdio.h>
//recursive function for Tower of Hanoi
void toh(int n,char a, char b, char c){
if(n==1)
printf("\nMove the Disk from Tower-%c to Tower-%c ",a,c);
else{
toh(n-1,a,c,b); //recursive call with n-1, A, B and C
printf("\nMove the Disk from Tower-%c to Tower-%c ",a,c);
toh(n-1,b,a,c); //recursive call with n-1, B, A and C
}
}

/* main function() */
int main(){
int n;
printf("Enter no of discs : ");
scanf("%d",&n);
toh(n,'A','B','C'); // A, B and C are names of towers
return 0;
}
