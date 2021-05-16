#include <stdio.h>



main()
{
    static a = 0,k=1,o,l=0;
    static i=0;
    if(l==0)
    {
        scanf("%d",&o);
    }

    if(l<o)
    {

        printf("%d ",i);
        a=k;
        k=i;
        i=a+k;

        l++;
        main();
    }

}
