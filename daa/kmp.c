#include<stdio.h>
#include<string.h>

char txt[100], pat[100];
int M, N, lps[100], j=0, i=0;

/* Construct the lookup table */
void compute_prefix_function() {
  int len = 0, i;
  lps[0] = 0;
  i = 1;
  while(i < M) {
    if(pat[i] == pat[len]) {
      len++;
      lps[i] = len;
      i++;
    }
    else {
      if( len != 0 )
        len = lps[len-1];
      else {
        lps[i] = 0;
        i++;
     }
   }
  }
}

/* Perform the search */
void KMPSearch() {
  int j=0,i=0;
  M = strlen(pat);
  N = strlen(txt);
  compute_prefix_function();
  while(i < N) {
    if(pat[j] == txt[i]) {
      j++;
      i++;
    }

    if (j == M) {
      printf("Found pattern at index %d \n", i-j);
      j = lps[j-1];
    }
    else if(pat[j] != txt[i]) {
      if(j != 0)
        j = lps[j-1];
      else
        i = i+1;
    }
  }
}

/* The main function() */

int main() {
  char c;
  printf("\nEnter The Text: ");
  //gets(txt);
  scanf("%[^\n]%*c",txt);
  printf("\nEnter The Pattern: ");
  //gets(pat);
  scanf("%[^\n]%*c",pat);
  KMPSearch();

  return 0;
}
