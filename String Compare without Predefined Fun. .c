#include <stdio.h>
#include <string.h>

int main()

{
    int i,j,k,sum1,sum2,re;
    sum1 = 0;
    sum2 = 0;
   char a[10],b[10];

   for(i=0;i<=9;i++)
{
    b[i] =0;
    a[i] = 0;
}


    gets(a);
    gets(b);



for(i=0;i<=9;i++)
{
    sum1 = a[i] + sum1;
    sum2 = sum2 + b[i];
}

re = sum1 - sum2;

if(re==0)
{printf("0 Equal");}
    else if (re<0)
        {printf("-1 Less");}
    else if (re>0)
{printf("1 Greater");}





    system("pause");
}
