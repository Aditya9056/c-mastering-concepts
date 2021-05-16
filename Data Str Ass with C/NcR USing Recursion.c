#include <stdio.h>
main()
{
    static fac=1,fac2=1,fac3=1,o,r;
    static j=0,n=1,l=0;

   if(l==0)
   {
    printf("Enter Values Of N and R:\n\n");
    scanf("%d%d",&n,&r);
    if(n<r)
    {
     printf("\n Please Enter The Correct Values as n<=r<=0\n");
     main();
    }
    o = n-r;
    l++;
   }
   if(n>0)
   {
       fac=fac*n;
       j=n;
       n--;
       j--;
     main();
   }

   if(o>0)
   {
       fac2=fac2*o;
        o--;
        main();

   }
if(r>0)
{
    fac3=fac3*r;
    r--;
    main();


}

    if(j==n)
    {
        printf("\n The Factorial is %d",fac/(fac3*fac2));
        exit(0);
    }




}
