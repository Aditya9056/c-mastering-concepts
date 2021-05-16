#include <stdio.h>
#define size 100
// Binary Search Tree Creation
struct bsnode
{
    struct bsnode *llink;
    int data;
    struct bsnode *rlink;
};
//End

//Creating ROOT Node
struct bsnode *root = NULL;

void insertintree();
void displayinorder();
void deletefromtree();
void searcht(int );
void stackpre();

//Stack Prototypes
void push(struct bsnode *);
void pop();

struct stack
{
    struct bsnode * data[100];
};

struct stack s1;
int top = -1;
// Static Stack Ends Here


/*-----------------------------*/

// Dynamic Stack Starts Here

struct node
{
        int info;
        struct node *link;
};

    struct node *dtop  = NULL;

    void dpush(struct bsnode *);
    void dpop();

// Here D Means Dynamic So Dtop -> Dynamic Stack Top

//Dynamic Stack Push
void dpush(struct bsnode *ptr)
{
        struct node *temp,*rtr;

         temp = (struct node *)malloc(sizeof(struct node));

        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                exit(0);
        }
        printf(" This Value %d Has Inserted\n",ptr->data);

        temp->info = ptr->data;
        temp->link = dtop;


        if(dtop==NULL)
        {
                dtop = temp;
        }
        else
        {
                rtr = top;
                dtop = temp;
                dtop->link = rtr;
        }
}

//Dynamic Stack Pop
void dpop()
{
    struct node ptr;

    if(dtop == NULL)
    {
        printf("\n  The Stack Is Under Flow Or Empty : \t \n");
    }
    else
    {
        printf("\n This Node Or Element %d Has Been Popped From The Stack : \t \n",dtop->info);
        dtop = dtop ->link;
    }
}

//Dynamic Stack Ends Here


main()
{
    int choice,ele;

    while(1)
    {
       printf("\n Operations Of Binary Search Tree");
       printf("\n Give Your Choice");
       printf("\n 1. Insert \n 2. Delete A Specific Node Or Element \n 3. Display Nodes With In-Order Traversal \n 4. Search A Node \n 5. Stack Version Pre-Order \n 6. Pre-Order Display With Dynamic Stack \n 7. Exit \n");
       scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                insertintree();
                break;

            case 2:
                printf("\n Give The Element\n");
                scanf("%d",&ele);
                deletefromtree(ele);
                break;

            case 3:
                displayinorder();
                break;

            case 4:
                printf("Give Node Data To Be Searched\n");
                scanf("%d",&ele);
                searcht(ele);
                break;

            case 5:
                printf("\n Stack Version Pre Order \n");
                stackpre();
                break;

            case 6:
                printf("\n This Is The Dynamic Stack Version \n");
                dpreorder();
                break;

            case 7:
                printf("\n Okay Exiting Now Bye.....-->+_+<--\n");
                exit(0);

        }
    }
}


void insertintree()
{
    struct bsnode *t = root,*p;

    struct bsnode *temp = (struct bsnode *)malloc(sizeof(struct bsnode));

    printf("\nGive Integer Data \n\n");
    scanf("%d",&temp->data);

    temp->rlink = NULL;
    temp->llink = NULL;

    if(root==NULL)
    {
        root = temp;
    }
    else
    {
        //For Traversing to the right location
        while(t)
        {
                p = t;

            if(temp->data>t->data)
            {
                t = t->rlink;
            }
            else
            {
                t = t->llink;
            }
        }

        //for inserting the data
        if(temp->data<p->data)
        {
            p->llink = temp;
        }
        else
        {
            p->rlink = temp;
        }
    }
}


//Deletion Starts Here

void deletefromtree(int ele)
{
    int i;

    struct bsnode *t = root,*b=NULL;

    //
    if(t == NULL)
    {
        printf("The Tree Does Not Have Any Nodes Yet !!!\n");
        return;
    }
    //Now Searching The Node In The Tree.
    while(t)
     {
        if(t->data == ele)
        {
            break;
        }
    if(ele<t->data)
        {
            b = t;
            t = t->llink;
        }
    else
        {
            b = t;
            t = t->rlink;
        }
     }

   if(t->llink==NULL && t->rlink==NULL)
   {
       if(b->rlink == t)
       {
           b->rlink = NULL;
       }
       else
       {
           b->llink = NULL;
       }
   }


  else if(t->llink!=NULL && t->rlink==NULL)
      {
            if(b->rlink == t)
       {
           b->rlink = t->llink;
       }
       else
       {
           b->llink = t->llink;
       }

     }

  else if(t->llink==NULL && t->rlink!=NULL)
        {

            if(b->rlink == t)
       {
           b->rlink = t->rlink;
       }
       else
       {
           b->llink = t->rlink;
       }

        }

        //Root Comes In This Case

 else if(t->llink!=NULL && t->rlink != NULL)
 {
     //here i will pass t->rlink->llink to while loop to find the least element in the right subtree

     struct bsnode *p = t->rlink;

     //b is pointing on target node that is going to be deleted.
     //only if t is root for below condition.

     if(t==root)
     {
         while(p->llink->llink)
         {
             puts("hello");
             p = p->llink;
         }

         t->data = p->llink->data;

         p->llink = NULL;
         printf("\n Now The Smallest Element From Right Sub Tree Is Root !!! \n\n");
         return;
     }

       else if(b->rlink == t)
       {
           while(p->llink->llink)
           {
               p = p->llink;
           }

            b->rlink->data = p->llink->data;
            p->llink = NULL;
       }
       else
       {
           while(p->llink->llink)
           {
               p = p->llink;
           }
           b->llink->data = p->llink->data;
           p->llink = NULL;
       }

 }
}

void searcht(int ele)
{
    int i;
    struct bsnode *t = root,*b;

    while(t)
    {
        if(t->data == ele)
        {
            b = t;
            break;
        }

    if(ele<t->data)
        {
            b = t;

            t = t->llink;
        }
    else
        {
            b = t;
            t = t->rlink;
        }
    }

    if(t->data==ele)
    {
    printf("The Node Is Found -->%d \n\n\n",t->data);
    }
    else
    {
        printf("The Node Is Not Present In The Tree.\n\n\n");
    }
}

// This Pre-Order Is Working Without The Stack Or Recursion.
//Morris Traversal For Pre-Order

void displayinorder()
{
    struct bsnode *temp = root;

    while(temp)
    {
         // If left child is null, print the current node data. Move to
        // right child.

        if(temp->llink==NULL)
        {
            printf("%d->",temp->data);
            temp = temp->rlink;
        }
        else
        {
            //find Inorder Predecessor

            struct bsnode *ptr = temp->llink;

            while(ptr->rlink&&ptr->rlink!=temp)
            {
                ptr = ptr->rlink;
            }


            // If the right child of inorder predecessor already points to this node

            if(ptr->rlink == temp)
            {
                ptr->rlink = NULL;
                temp = temp->rlink;
            }
              // If right child doesn't point to this node, then print this
            // node and make right child point to this node
            else
            {
                printf("%d-->",temp->data);
                ptr->rlink = temp;
                temp = temp->llink;
            }
        }
    }
}



//Stack Starts From Here

void push(struct bsnode *ele)
{
    if(top == size-1)
    {
        printf("\n The Stack Is Full :\n");
    }
    else
    {
        s1.data[++top] = ele;
    }
   // printf("\n This Element %d Has Inserted On This %d Position \n",ele->data,top);
}

void pop()
{
    if(top == -1)
    {
        printf("\n The Stack Is Empty :\n");
    }
    else
    {
        //printf("\n This Element %d Has Popped From The Stack \n",s1.data[top]->data);
        top--;
    }
}
//Stack Push and Pop Ends Here


//This Pre Order Works With The Dynamic Stack Or Stack Using Linked List.

void stackpre()
{

if(root == NULL)
{
    printf("\nThe Tree Is Empty:\n");
    return;
}
//Push Root To The Stack

push(root);


while(top != -1)
{
    //Pointing To The data So We Can Check Its Left Or Right Sub-Element.
    struct bsnode *ptr = s1.data[top];

    //Printing Before Popping The Pointer
    printf("%d ->",s1.data[top]->data);
    pop();

    //
    if(ptr->rlink)
    {
        push(ptr->rlink);
    }
    if(ptr->llink)
    {
        push(ptr->llink);
    }
}

}

//Pre Order With Dynamic Stack

void dpreorder()
{
    if(root == NULL)
    {
        printf("\n The Tree Is Empty\n");
        return;
    }

    //Push Root To The Dynamic Stack

    dpush(root);

    while(dtop != NULL)
    {

        //Pointing A Pointer Ptr To Dtop So We Can Check If It's Left Right Exist OR Not
        struct bsnode *ptr = dtop;

        //Printing Before Popping
        printf("%d->",dtop->info);

        dpop();

        if(ptr->llink)
        {
            push(ptr->llink);
        }
        if(ptr->rlink)
        {
            push(ptr->rlink);
        }
    }
}

