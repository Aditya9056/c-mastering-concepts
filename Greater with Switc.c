#include <stdio.h>
int main()

{


int a, b, gr;

a =1 ; b=2;

if (a>b)
gr = 1;
else

    gr = 2;


    switch(gr)
{
case 1:

    printf("Greatest is %d",a);
    break;

case 2:
    printf("Greatest is %d",b);
    break;

}




system("pause");
}
