// Write a menu driven program which creates Binary Search Tree.
// a) Implement recursive tree traversing methods for inorder, preorder and postorder traversal.


#include<stdio.h>
#include<stdlib.h>


struct Tree
{
	int data;
	struct Tree* left;
	struct Tree* right;
};

struct Tree* tree(int data, struct Tree* root)
{
	struct Tree* p ;
	if(root == NULL)
	{
		p = (struct Tree*) malloc(sizeof(struct Tree));
		p -> data =  data;
		p -> left = NULL;
		p -> right = NULL;
	}
	else
	{
		if(data > p -> data)
		{
			p -> left = tree(data, p -> left);
		}
		if(data < p -> data)
		{
			p -> right = tree(data, p -> right);
		}

	}
	return p;
}

void traverse(struct Tree *root)
{

		if(root != NULL)
		{
			printf("\t%d", root -> data);
			traverse(root -> left);
			traverse(root -> right);

		}

}

void postorder(struct Tree *root)
{
	if(root != NULL)
	{
		postorder(root -> left);
		printf("\t %d", root -> data);
		postorder(root -> right);
	}

}

void preorder(struct Tree *root)
{
	if(root != NULL)
	{
		preorder(root -> right);
		printf("\t %d", root -> data);
		preorder(root -> left);
	}
}

void main()
{
	int n ;
	int choice ;
	char ch;
	struct Tree* root = NULL;

	// while(choice != 5)
	do{
	
		printf("\n\n------Main menu ------\n");
		printf("1.insert \n");
		printf("2.inorder \n");
		printf("3.postorder\n");
		printf("4.preorder\n");
		printf("5.exit\n");

		printf("Enter a choice: ");
		scanf("%d", &choice);

		switch(choice)
		{
			case 1:
				printf("Enter a element: ");
				scanf("%d", &n);
				root = tree(n,root);
				break;
			case 2:
				traverse(root);
				break;
			case 3:
				postorder(root);
				break;
			case 4:
				preorder(root);
				break;
			case 5:
				exit(0);
				break;
			default:
				printf("Invalid choice");
		}
		printf("\n Do you wise to countinue y or n: ");
        scanf("%s",&ch);


	}while(ch == 'y' || ch == 'Y');
}

