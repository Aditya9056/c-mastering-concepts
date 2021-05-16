#include <stdio.h>
#include <stdlib.h>
main()
{
    char *a,*b;
    a=(char*)malloc(100*sizeof(char));
    b=(char*)malloc(100*sizeof(char));
    gets(a);
    gets(b);
    puts(a);
    printf("\n Ans is %d",strcm(a,b));
}
int strcm(char *a,char *b)
{
    int i,j;
    for(i=0;a[i]!='\0';i++)
    {if(a[i]!=b[i])

    {j = a[i]-b[i];
    if(j<0){printf("-1");exit(0);}
    else if(j>0)printf("1");
    exit(0);}
    }
    printf("0");
}
