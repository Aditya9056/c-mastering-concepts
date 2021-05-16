#include <stdio.h>

int main()

{

 int n,r,x,y,z,o;

 puts("Give value n and r");

 scanf("%d%d",&n,&r);

 x = fact(n);

 o = n-r;

 y = fact(o);

 printf("The npr is = %d \n",x/y);

 z = fact(r);

 printf("\n\n\n ncr is = %d",x/z*y);


}

int fact(int a)

{
    int c;
    c = 1;

    while(a!=0)
    {
        c = c*a;
        a--;
    }

    return c;

}

