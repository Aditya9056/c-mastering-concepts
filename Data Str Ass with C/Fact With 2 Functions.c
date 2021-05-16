#include<stdio.h>

int fact(int );

int main()
{

int i,j;

printf("\n Enter The Value\n");
scanf("%d",&i);

j = fact(i);

printf("\n The Value is %d\n",j);

}


int fact(int x)
{

int k;
if(x>1)
 k = x*fact(x-1);
else
{return 1;}


 return k;
}
