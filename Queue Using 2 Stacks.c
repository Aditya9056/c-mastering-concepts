#include <stdio.h>
#include <conio.h>

void push(int);
void pop(void);
void traverse(void);
void peek(void);
int isfull(void);
int isempty(void);

int size = 10;

struct stack
{
  int a[10];
};

struct stack s1,s2;

int top1 = -1;
int top2 = -1;

int ele = 0;

int main(void)
{

while(1)
    {
        int a,op;

        printf("\n 1.Enqueue \n 2. Dequeue \n 3. Traverse \n 4. Length \n 5. Quit \n");

        scanf("%d",&a);

        switch(a)
        {

            case 1: printf("\nEnter element\n");
            scanf("%d",&ele);
                enqueue(ele);
                break;

            case 2:
              dequeue();
              printf("\n\nThe Opration has been completed Successfully\n\n");

                break;

            case 3:
                traverse();

                    break;

            case 4:
                length();


                break;

            case 5:
               exit(0);

               break;

            default:
            printf("Error \n");

        }
    }
}


int isfull(void)
{
	if(top1==size-1&&top2==size-1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
}

int isempty()
{
	if(top1 == -1 && top2 == -1)
	{
		return 0;
	}
	else
	{
		return 1;
	}
 }


void enqueue(int ele)
{
	if(isfull())
	{
	    if(top1 != size-1)
		{
		    top1++;
		    s1.a[top1] = ele;
            printf("\n-- %d -- Element\n",ele);
		}
		else
        {
            top2++;
            s2.a[top2] = ele;
        }
	}
	else
	{
		printf("\n\nTHE Queue IS FULL or OVERFLOW\n");
	}
}

void dequeue(void)
{

int i;

   if(top2 == -1)
	{
	    while(top1!=-1)
        {
            top2++;


            s2.a[top2] = s1.a[top1];
            top1--;
        }
       top2--;
	}
	else
	{
	    top2--;
        printf("\n%d---top1  \n %d---top2",top1,top2);
	}

}

void traverse(void)
{
    int i;

    printf("\n%d---top1  \n %d---top2\n\n",top1,top2);



    if(top2!=-1)
        {
            for(i=top2;i>=0;i--)
            {
                printf("%d-->",s2.a[i]);
            }
        }

	   if(top1!=-1)
        {
            for(i=0;i<=top1;i++)
            {
                printf("%d-->",s1.a[i]);
            }
        }

}

void length(void)
{
    int len=0;

    if(top1!=-1)
    {
        len = top1+1;
        printf(" The Length Of The Queue Is %d",len);

    }
    if(top2!=-1)
    {
        len= len+top2+1;
        printf(" The Length Of The Queue Is %d",len);
    }
	if(!isempty())
	{
			printf("\n\n\nThe Queue is Empty or Underflow\n\n");
	}
}
