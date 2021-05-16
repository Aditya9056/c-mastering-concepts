#include <stdio.h>
main()
{
    static fac,o=0;
    static j=0,n=1;


   if(j==0)
   {
    printf("Enter No.\n");
    scanf("%d",&fac);
    o=fac;
   }
   if(fac>0)
   {
       n=fac*n;
       fac--;j++;
       main();
   }
    if(j==o)
    {
        printf("\n The Factorial is %d",n);
        exit(0);
    }



}
