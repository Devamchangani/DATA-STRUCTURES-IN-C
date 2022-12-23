// Write a menu driven program which creates Binary Search Tree.
// b)  Implement non-recursive tree traversing methods for inorder, preorder and postorder traversal.

#include <stdio.h>
#include <stdlib.h>

struct Tree
{
    int data;
    struct Tree *left;
    struct Tree *right;
}*root = NULL;



struct Tree* tree(int data)
{
    struct Tree *newnode , *par, *ptr;


    // par use for link
    // ptr use for find place

    ptr = root;
    par = NULL;

    while(ptr != NULL)
    {
        if( data < ptr -> data)
        {
            ptr = ptr -> left;
        }
        else if (data > ptr -> data)
        {
            ptr = ptr -> right;
        }
        else
        {
            printf("\nDuplicate data");
            return root;
        }
    }

    newnode = (struct Tree* )malloc(sizeof(struct Tree));
    newnode -> data = data;
    newnode -> left = NULL;
    newnode -> right = NULL;

    if(par == NULL)
    {
        root = newnode;
    }
    else if (data < par -> data)
    {
        par -> left = newnode;
    }
    else
    {
        par -> right = newnode;
    }
    
    return root;

}


// void traverse()
// {

//     struct Tree *current, *pre;


//     if(root == NULL)
//     {
//         return;
//     }

//     current = root;

//     while(current != NULL)
//     {
//         if(current -> left == NULL)
//         {
//             printf("%d", current -> data);
//             current = current -> right;
//         }
//         else
//         {
//             pre = current -> left;
//             while (pre -> right != NULL && pre -> right != current)
//             {
//                 pre = pre -> right;
//             }

//             if(pre -> right == NULL)
//             {
//                 pre -> right = current;
//                 current = current -> left;
//             }
//             else
//             {
//                 pre -> right = NULL;
//                 printf("%d", current -> data);
//                 current = current -> right;
//             }
//         }
//     }
    
    
// }


void traverse()
{

		if(root != NULL)
		{
			printf("\t%d", root -> data);
			traverse(root -> left);
			traverse(root -> right);

		}

}

int main()
{
    int n;
    int choice;
    char ch;
    // struct Tree *root = NULL;

    do{
        printf("\n");
        printf("1.Insert\n");
        printf("2.inorder \n");
		printf("3.postorder\n");
		printf("4.preorder\n");
        printf("5.Exit\n");
        printf("\nEnter your choice : ");
        scanf("%d", &choice);

        switch (choice)
        {

        case 1:
            printf("\nEnter the key to be inserted : ");
            scanf("%d", &n);
            root = tree(n);
            break;
        case 2:
				traverse();
				break;
		// case 3:
		// 		postorder(root);
		// 		break;
		// case 4:
		// 		preorder(root);
		// 		break;
        

        case 5:
            exit(0);

        default:
            printf("\nWrong choice\n");
        }
        printf("\n Do you wise to countinue y or n: ");
        scanf("%s",&ch);


	}while(ch == 'y' || ch == 'Y');

    return 0;
}