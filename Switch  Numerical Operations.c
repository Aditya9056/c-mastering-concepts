
#include <stdio.h>
#include <conio.h>

#define size 5

int stack[size], top = -1,ele;

int peek(void);
int traverse(void);
int push(int);
int pop(void);
int isEmpty(void);
int isFull(void);


void main(void)

{

while(1)
{
        int a,op;

        printf("\n 1.Push \n 2. Pop \n 3. Traverse \n 4. Peek \n 5. Quit \n");

        scanf("%d",&a);

        switch(a)
            {
            case 1: printf("\nEnter element\n");
            scanf("%d",&op);
                push(op);
                break;

            case 2:
                op = pop();

                if(op==0)
                    printf("the is underflow");
                else
                printf("the popped element was %d \n",op);

                break;

            case 3:
                traverse();

                    break;

            case 4:
                op =peek();
                if(op == 0)
                {
                    printf("\nThe stack is Underflow \n");
                }
                else
                {
                    printf("The top element is = %d \n",op);
                }


                break;

            case 5:
               exit(0);

               break;

            default:
            printf("Error \n");

}
    }
        }


int push (int ele)

{

    if(isFull())
    {

        printf("Stack is FUll or OVerflow \n");

    }

    else
    {
        top++;

        stack[top] = ele;

        printf("Element is Inserted");
    }


}

int isFull()

{


    if(top==size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}


int pop()

{
    if(isEmpty())

    {
        printf("The stack is underflow");

        return 0;
    }

    else

    {

        return stack[top--];

    }


}


int isEmpty()

{


    if(top==size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }

}

int peek()

{
    if(isEmpty())
    {
        printf("the stack is underflow");

        return 0;
    }
    else

    {
        return stack[top];

    }
}


int traverse()

{
    if(isEmpty())
    {
        printf("the stack is underflow");
        return ;
    }
    else
    {
        int b;

        printf("\n The elements are : \n");
        for(b=0;b<=top;b++)
        {

            printf("%d \n",stack[b]);

        }
    return;
    }

}
