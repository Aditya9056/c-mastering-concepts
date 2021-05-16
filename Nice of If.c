#include<stdio.h>

int main()

{
    int a, b, c;

    printf("Give the Value of a, b and c \n");

    scanf("%d \n %d \n %d ",&a,&b,&c);

if(a<b)
{
    if(b<c)
    {
        printf("C is Greatest");

    }
    else
    {
        if(c<b)
        {

            printf("B is greatest");
        }

    }
}

else

{
    if(a>b)
    {
        if(a>c)
        {
            printf("A is greatest");
        }

        else
        {
            if(b>a)
            {
                printf("B is Greatest");
            }
        }

    }
}


system("pause");
}


