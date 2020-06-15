#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int strlen_(const char *s) {
    //printf("Input string %s\n", s);
    int len = 0;
    int count = 100;
    while(s[len]!='\0' && len < count) ++len;
    //printf("len : %d\n",len);
    return len;
}

char* substr_(const char *s, int begin, int end) {
	int len = strlen_(s);
	if (begin < 0 || begin >= len || end > len || end < begin) {
		printf("Invalid inp");
		return NULL;
	}
	char *str = (char*)malloc((end-begin+1)*sizeof(char));
	int i = begin;
	for(;i<end;++i) {
		str[i-begin]=s[i];
	}
	str[i-begin]='\0';
	return str;
}

int main() {
    char str[20];
    int a;
    scanf("%s", &str);
    char *TT = substr_(str,8,10);
    //printf("TT %s\n", TT);
    if (strcmp(TT,"PM")==0) {
        printf("cmp : %d\n", strcmp(substr_(str,0,2),"12"));
        if(strcmp(substr_(str,0,2),"12")<0){
            printf("PM case less than 12\n");
            if(strcmp(substr_(str,0,2),"08")<0){
                str[0]='1';
                str[1]+=2;
            }
            else if(strcmp(substr_(str,0,2),"10")<0)
            {
                str[0]='2';
                str[1]-=8;
            }
            else{
                str[0]='2';
                str[1]+=2;
            }
        }
        str[8]='\0';
    } else {
        if(strcmp(substr_(str,0,2),"12")==0) {
            str[0]='0';
            str[1]='0';
        }
        str[8]='\0';
    }
    printf("%s\n",str);
    //printf("%02c:%02c:%02c", hh, mm, ss) ;
    return 0;
}

