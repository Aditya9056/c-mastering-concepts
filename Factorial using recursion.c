#include <stdio.h>

int fact(int x);

int c = 1;

int main()

{
    int z;
    printf("give value \n");
    scanf("%d",&z);
    fact(z);

}

int fact(int x)
{
    c = c*x;
    x--;

    if(x==0)
    {
        printf("Factorial is = %d",c);

        exit(0);
    }


    fact(x);

}
