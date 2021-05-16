#include"stdio.h"
void main(){char a[100],b[100];gets(a);gets(b);strcm(a,b);}void strcm(char a[],char b[]){int i,j;for(i=0;a[i]!='\0';i++){if(a[i]!=b[i]){j = a[i]-b[i];if(j<0){printf("-1");exit(0);}else if(j>0)printf("1");exit(0);}}printf("0");}
