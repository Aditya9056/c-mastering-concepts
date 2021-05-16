#include<stdio.h>
#include<conio.h>


struct node
{
	int data;
	struct node *link;
};

typedef struct node Node;
typedef struct node* ptr;
ptr root = NULL;

void add_begin(void)
{
	Node *temp;

	temp = (ptr)malloc(sizeof(Node));

	printf("\n\nPlease enter the node data \n\n");

	scanf("%d",temp->data);
	temp->link = NULL;

	if(root==NULL)
	{
		printf("\n\nIt is the first element assigning it to the root\n\n");
		root = temp;

	}
	else
	{
		temp->link = root;
		root= temp;
	}

}




main()
{


}

