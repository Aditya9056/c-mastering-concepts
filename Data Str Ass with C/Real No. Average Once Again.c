#include <stdio.h>

main()
{
    int i,j,k,s,a[10];

    char c[10];

    scanf("%d",&s);


    //If First iS Minus

    j=0;

    for(i=0;i<s;i++)
    {

    scanf("%c",&c[i]);
    printf("%d",c[i]);

    if(c[i]>=42&&c[i]<=47)
    {
        if(c[i]==45&&c[i]==0)
        {
            printf("hello");
        }

    }


  if(c[i]>'0'&&c[i]<'9')
    {
     a[j]=c[i]-'0';
     j++;
     printf("   %d",a[j]);
    }

}

/*for(i=0;i<s;i++)
{

    printf(" %d ",a[i]);
}
*/

}
