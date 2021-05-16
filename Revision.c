#include <stdio.h>

struct linkedlistnode
{

    int data;
    struct linkedlistnode * link;
};

typedef struct linkedlistnode lnode;

int length(lnode **);

void insert_begin(lnode **,int data);
void insert_last(lnode **, int data);
void insert_mid(lnode **, int data);

/*
void delete_begin(lnode *);
void delete_last(lnode *);
void delete_mid(lnode *, int target);

int search(lnode *);

*/
void display(lnode **);




//Main
int main()      //main() starts
{
    int data;
 int pos;
    lnode * root = NULL;
    printf("%d <--- root",&root);
        int choice=0;
        while(1){
                printf("\n***SINGLE LINKED LIST OPERATIONS:****\n");
                printf("\n                MENU                             \n");
                printf("---------------------------------------\n");
                printf("\n 1. Insert At Begin    \n");
                printf("\n 2. LAst    \n");
                printf("\n 3.Mid    \n");
                printf("\n 4.Display  \n");
                printf(" \n 5. length \n");
                scanf("%d",&choice);
                switch(choice)
                {

                        case 1:
                            printf("Give THe Node Data\n");
                            scanf("%d",&data);
                                insert_begin(&root,data);
                                break;
                        case 2:
                            printf("Give THe Node Data\n");
                            scanf("%d",&data);
                            insert_last(&root,data);
                            break;

                        case 3:

                            printf("Give THe Node Data\n");
                            scanf("%d",&data);
                            insert_mid(&root,data);
                            break;

                        case 4:
                            display(&root);
                            break;
                        case 5:
                            printf("\n This Is Length %d \n",length(&root));
                            break;

                }//end of switch()
        }
}//end of main()

void display(lnode ** root)
{
    lnode *temp = *root;
    if(*root == NULL)
    {
        printf("empty");
    }
    printf("\n\n");
    while(temp != NULL)
    {
        printf("%d-->",temp->data);
        temp= temp->link;
    }
}


void insert_begin(lnode ** root, int data)
{

    lnode * temp = (lnode *)malloc(sizeof(lnode));
    temp->data = data;
    temp->link = NULL;

    if(*root ==NULL)
    {
        *root = temp;
    }
    else
    {
     temp ->link = *root;
     *root = temp;
    }

    printf("\nThis Node %d Is Inserted iN THe Start\n",data);
}

void insert_last(lnode ** root, int data)
{
    lnode * temp = (lnode *)malloc(sizeof(lnode));


    temp ->data = data;
    temp ->link = NULL;

    if(*root == NULL)
    {
        printf("THis Is FIst Node Because LIst IS empty\n");
        *root = temp;
    }
    else
    {
        lnode * traverse = *root;

        while(traverse->link != NULL)
        {
            traverse = traverse->link;

        }

        traverse->link = temp;

        printf("\n This Node %d Is Inserted At Last \n",data);
    }
}

int length(lnode ** root)
{
    int l2 = 0;

    lnode *temp = *root;

    while(temp!=NULL)
    {
        l2++;
        temp = temp->link;
    }
    printf("%d <-- Length\n",l2);
    return l2;
}

void insert_mid(lnode ** root, int data)
{
    int pos,l2;
    lnode * temptr = *root;
    lnode * newnode = (lnode *)malloc(sizeof(lnode));
    newnode ->data = data;
    newnode ->link = NULL;

     l2 = length(&root);

     if(*root==NULL)
     {
         printf("THis Is FIst Node Because LIst IS empty\n");
            *root = newnode;
            return;
     }
     printf("\n Give THe Postion\n");

     scanf("%d",&pos);
    if(pos>l2)
    {
        printf("The Length Is %d\n",l2);
        printf("\n Wrong Position \n");
        return;
    }

    int traverse = 0;

    while(traverse<pos)
    {
        temptr = temptr->link;
        traverse++;
    }

    newnode->link = temptr->link;
    temptr->link = newnode;
}



