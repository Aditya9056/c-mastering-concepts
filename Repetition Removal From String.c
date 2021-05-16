#include <stdio.h>


char *dstr(char *ptr,int size);

main()
{
int i;
char a[100];
printf("\nEnter String\n");

gets(a);

char *pt = dstr(a,100);

for(i=0;i<10;i++)
    {

printf("%c",pt[i]);

    }
}


char *dstr(char *ptr,int size)
{
    int i,j = 0;

    char *ct =(char *)malloc(size);

    char *str = ptr;

    for(i=0;i<size;i++)
    {
        if(str[i]==str[i+1])
        {
            ct[j++] = str[i];
            i++;
        }
        else
        {
            ct[j++] = str[i];
        }
    }
    return ct;
}

