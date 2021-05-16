
#include <stdio.h>
#include <stdlib.h>


/*-----------------------------*/
struct node
{
        int info;
        struct node *link;
};

    struct node *start = NULL;
    struct node *top  = NULL;

void push();
void pop();
void peek();
void traverse(struct node *);

int main()      //main() starts
{
        int choice;
        while(1){
                printf("\n***STACK USING LINKED LIST OPERATIONS:****\n");
                printf("\n                MENU                             \n");
                printf("---------------------------------------\n");
                printf("\n 1. Push     \n");
                printf("\n 2. Pop       \n");
                printf("\n 3. Peek       \n");
                printf("\n 4. Traverse    \n");
                printf("\n 5. Exit         \n\t");
                printf("\n Give Your Choice :-   ");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        push();
                                        break;
                        case 2:
                                        pop();
                                        break;
                        case 3:
                                        peek();
                                        break;
                        case 4:
                                        traverse(top);
                                        break;
                        case 5:
                                        exit(0);
                                        break;
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }//end of switch()
        }
}//end of main()

void push()
{
        struct node *temp,*ptr;

        temp = (struct node *)malloc(sizeof(struct node));

        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                exit(0);
        }

        printf("\n  Enter the data value for the next element :\t");
        scanf("%d",&temp->info);
        temp->link = top;


        if(top==NULL)
        {
                top = temp;
        }
        else
        {
                ptr = top;
                top = temp;
                top->link = ptr;
        }
}//end of create()

void pop()
{
    struct node ptr;

    if(top == NULL)
    {
        printf("\n  The Stack Is Under Flow Or Empty : \t \n");
    }
    else
    {
        printf("\n This Node Or Element %d Has Been Popped From The Stack : \t \n",top->info);
        top = top ->link;
    }
}

void peek()
{
    printf("\n This Is The Top Node Or Element In The Stack %d: \t\n ",top->info);
}


void traverse(struct node *top)
{
        struct node *ptr ;
        if(top==NULL)
        {
                printf("\nList is empty:\n");
                return;
        }
        else
        {
            if(top->link == NULL)
            {
                printf("\n These Are The Elements Of The Stack : \t");
            }

            if(top->link!= NULL)
            {
                traverse(top->link);
            }

            printf("%d \n",top->info);
            return;
        }
}


