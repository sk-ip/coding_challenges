#include<stdio.h>
#include<stdlib.h>

struct node
{
	int data;
	struct node *left, *right;
}*tree;

struct node *ptr, *node_ptr, *parent_ptr, *par;

void Create_tree()
{
	tree = NULL;
}

void Insert()
{
	int val;
	printf("Enter a value\n");
	scanf("%d", &val);
	ptr = (struct node *)malloc(sizeof(struct node));
	ptr -> data = val;
	ptr -> left = NULL;
	ptr -> right = NULL;

	if(tree == NULL)
	{
		tree = ptr;
	}
	else
	{
		parent_ptr = NULL;
		node_ptr = tree;
		while(node_ptr != NULL)
		{
			parent_ptr = node_ptr;
			if(val < node_ptr -> data)
				node_ptr = node_ptr -> left;
			else
				node_ptr = node_ptr -> right;
		}

		if(val < parent_ptr -> data)
			parent_ptr -> left = ptr;
		else
			parent_ptr -> right = ptr;
	}
}

void Preorder(struct node * tree)
{
	if(tree != NULL)
	{
		printf("%d ", tree -> data);
		Preorder(tree -> left);
		Preorder(tree -> right);
	}
}

void Inorder(struct node * tree)
{
	if(tree != NULL)
	{
		Inorder(tree -> left);
		printf("%d ", tree -> data);
		Inorder(tree -> right);
	}
}

void Postorder(struct node * tree)
{
	if(tree != NULL)
	{
		Postorder(tree -> left);
		Postorder(tree -> right);
		printf("%d ", tree -> data);
	}
}

void Delete()
{
	int dkey;
	printf("what to delete:\n");
	scanf("%d", &dkey);
	ptr = tree;
	par = NULL;
	while(ptr != NULL)
	{
		if(dkey == ptr -> data)
			break;
		par = ptr;
		if(dkey < ptr -> data)
			ptr = ptr -> left;
		else
			ptr = ptr -> right;
	}

	if(ptr == NULL)
	{
		printf("KEY NOT PRESENT");
		return;
	}
	else if(ptr -> left != NULL && ptr -> right != NULL)
		case_c(tree, par, ptr);
	else if(ptr -> left != NULL)
		case_b(tree, par, ptr);
	else if(ptr -> right != NULL)
		case_b(tree, par, ptr);
	else
		case_a(tree, par, ptr);
}

void case_a(struct node *root, struct node *par, struct node *ptr)
{
	if(par == NULL)
		root = NULL;
	else if(ptr == par -> left)
		par -> left = NULL;
	else if(ptr == par -> right)
		par -> right = NULL;

	free(ptr);
}

case_b(struct node *root, struct node *par, struct node *ptr)
{
	struct node *child;
	if(ptr -> left != NULL)
		child = ptr -> left;
	else
		child = ptr -> right;

	if(par == NULL)
		root = child;
	else if(ptr == par -> left)
		par -> left = child;
	else if(ptr == par -> right)
		par -> right = child;

	free(ptr);
}

case_c(struct node *root, struct node *par, struct node *ptr)
{
	struct node *succ,*parsucc;
	parsucc = ptr;
	succ = ptr -> right;
	while(succ -> left != NULL)
	{
		parsucc = succ;
		succ = succ -> left;
	}

	ptr -> data = succ -> data;

	if(succ -> left == NULL && succ -> right == NULL)
		case_a(root, parsucc, succ);
	else
		case_b(root, parsucc, succ);
}

void main()
{
	int ch;
	do
	{
		printf("MENU\n");
		printf("1.) CREATE TREE\n");
		printf("2.) INSERT\n");
		printf("3.) DELETE\n");
		printf("4.) PREORDER\n");
		printf("5.) INORDER\n");
		printf("6.) POSTORDER\n");
		printf("7.) EXIT\n");
		printf("Enter your choice\n");
		scanf("%d", &ch);
		switch(ch)
		{
			case 1: Create_tree();
					printf("tree initialized.\n");
					break;
			case 2: Insert();
					break;
			case 3: Delete();
					break;
			case 4: Preorder(tree);
					break;
			case 5: Inorder(tree);
					break;
			case 6: Postorder(tree);
					break;
		}
	}while(ch != 7);
}