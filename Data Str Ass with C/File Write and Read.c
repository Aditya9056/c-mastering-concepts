#include <stdio.h>

main()
{

    FILE *v;

    v=fopen("ak.txt","r");
if(v==NULL)
{
    printf("ERROR");
}


    putc('p',v);

    v=fopen("ak.txt","r");

    printf("%c\n\n",getc(v));


    fclose(v);

}
