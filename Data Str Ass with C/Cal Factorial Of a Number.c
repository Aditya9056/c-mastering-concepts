#include <stdio.h>

int fact(int a);
main()
{
    int a,i;

    printf("\nGive No. To Find Factorial\n");
    scanf("%d",&a);

 printf("\nHere It Is ->> %d\n",fao(a));
}

int fao(int a)
{
    int fac=1;
    while(a>0)
    {
        fac = a*fac;
        a--;
    }

   return fac;
}
