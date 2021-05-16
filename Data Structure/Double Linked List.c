#include <stdio.h>
#include <conio.h>

struct node
{
    struct node *left;
    int data;
    struct node *right;
};

struct node *root;

void addatbegin()
{
struct node *temp;

    temp = (struct node *)malloc(sizeof(struct node));

    temp->left = NULL;

    temp->right = NULL;

    scanf("%d",&temp->data);

    if(root == NULL)
    {

        root = temp;
    }
    
	else
{
	
	temp->right=root;
	
	root->left = temp;
	
	root=temp;
	
	
}

}

void addatafter()
{
struct node *temp;

    temp = (struct node *)malloc(sizeof(struct node));

    temp->left = NULL;

    temp->right = NULL;

    scanf("%d",&temp->data);

    if(root == NULL)
    {

        root = temp;
    }
    
	else
{
	struct node* p= root;
	int loc,i=1;
	printf("\n****Please Enter Location to Insert the Node.\n");
	scanf("%d",&loc);
	
	while(i<loc)
	{
		p = p->right;
		i++;
	}
	
	temp->right=p->right;
	
	p->right = temp;
	
	temp->left = p;
		
	
}

}


void append()
{
    struct node *temp;

    temp = (struct node *)malloc(sizeof(struct node));

    temp->left = NULL;

    temp->right = NULL;

    scanf("%d",&temp->data);

    if(root == NULL)
    {

        root = temp;
    }
    else
    {
        struct node *p;
        p = root;
        while(p->right!= NULL)
        {

           p = p->right;

        }

        p->right = temp;

        temp->left = p;

    }
    
}

void display()
{

    struct node *temp;

    temp = root;

    if(root==NULL)
    {
        printf("\n\nThere are NO elements to display\n\n.");
    }

    else
    {
        while(temp!=NULL)
{
    printf("%d-->",temp->data);
    temp =temp->right;
}

    printf("\n\n These are all elements\n\n");

    }
}


int main()
{
        int choice;
        while(1){
                printf("\n***SINGLE LINKED LIST OPERATIONS:****\n");
                printf("\n                MENU                             \n");
                printf("---------------------------------------\n");
                printf("\n 1.Create     \n");
                printf("\n 2.Display    \n");
                printf("\n 3.Insert at the beginning    \n");
                printf("\n 4.Insert at the end  \n");
                printf("\n 5.Insert at specified position       \n");
                printf("\n 6.Delete from beginning      \n");
                printf("\n 7.Delete from the end        \n");
                printf("\n 8.Delete from specified position     \n");
                printf("\n 9.Exit       \n");
                printf("\n--------------------------------------\n");
                printf("Enter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                        case 1:
                                        append();
                                        break;
                        case 2:
                                        display();
                                        break;
                        case 3:
										addatbegin();	
                                        break;
                        case 4:

                                        break;
                        case 5:

                                        break;
                        case 6:

                                        break;
                        case 7:

                                        break;
                        case 8:

                                        break;
                        case 9:
                                        exit(0);
                                        break;
                        default:
                                        printf("\n Wrong Choice:\n");
                                        break;
                }
        }
}




