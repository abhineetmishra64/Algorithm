#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>



int main() 
{
    int a, b,n;
    scanf("%d\n%d", &a, &b);
  	// Complete the code.
    char* r[10]={"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    for(n=a;n<=b;n++)
    {
        if(n>9)
        {
            if(n%2==0) printf("even\n");
            else printf("odd\n");
        }
        else printf("%s\n",r[n]);
    }
}

