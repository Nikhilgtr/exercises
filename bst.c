#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int data;
	struct node *left;
	struct node *right;
}bst_node_t;

bst_node_t * create_node(int data)
{
	bst_node_t * tmp = (bst_node_t *) malloc (sizeof(bst_node_t));
	if(!tmp) {
		printf("memory alloc failed\n");
	}
	tmp->data = data;
	tmp->right = NULL;
	tmp->left = NULL;
	return tmp;
}

void insert_node_at_last(bst_node_t **root, int data)
{

	if(*root == NULL)
	{
		*root = create_node(data);
		return;
	}
	if(data <= (*root)->data)
		insert_node_at_last(&(*root)->left, data);
	else
		insert_node_at_last(&(*root)->right, data);
}

void print_inorder(bst_node_t *root)
{
	if(root == NULL)
		return;

	print_inorder(root->left);
	printf("%d ", root->data);
	print_inorder(root->right);
}

int search_tree(bst_node_t *root, int data)
{
	if(root == NULL) 
		return 0;
	else if(root->data == data)
		return 1;
	
	int i = search_tree(root->left, data);
	if(i)
		return 1;
	int j = search_tree(root->right, data);

	return j;
}

// Function to find k'th smallest element in BST
// Here count denotes the number of nodes processed so far
int count = 0;

bst_node_t* kthSmallest(bst_node_t* root, int k)
{
    // base case
    if (root == NULL)
        return NULL;

    // search in left subtree
    bst_node_t* left = kthSmallest(root->left, k);

    // if k'th smallest is found in left subtree, return it
    if (left != NULL)
        return left;

    // if current element is k'th smallest, return it
    count++;
    if (count == k)
        return root;

    // else search in right subtree
    return kthSmallest(root->right, k);
}

// Function to print k'th smallest element in BST
void printKthSmallest(bst_node_t* root, int k)
{
    // maintain index to count number of nodes processed so far
    bst_node_t* res = kthSmallest(root, k);
    if (res == NULL)
        printf("There are less than k nodes in the BST");
    else
        printf("K-th Smallest Element is %d\n", res->data);
}

int getHeight(bst_node_t* root) {
	if(root == NULL)
		return -1;
	int left=getHeight(root->left);
	int right = getHeight(root->right);
	return (left < right? right+1:left+1) ;
}

void print_level_order_(bst_node_t *root, int h)
{
	if(root == NULL)
	{
		return;
	}
	if(h == 1)
		printf("%d ", root->data);
	else if(h > 1)
	{
		print_level_order_(root->left, h-1);
		print_level_order_(root->right, h-1);
	}
}

 
/* Print nodes at a current level */
void printCurrentLevel(bst_node_t* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1) {
        printCurrentLevel(root->left, level - 1);
        printCurrentLevel(root->right, level - 1);
    }
}

void print_level_order(bst_node_t *root)
{
	int height, i = 0;
	height = getHeight(root);
	for(i = 1; i <= height; i++)
		print_level_order_(root, i);
}
void printLevelOrder(bst_node_t* root)
{
    int h = getHeight(root);
    int i;
    for (i = 1; i <= h; i++)
        printCurrentLevel(root, i);
}
int find_min(bst_node_t *node)
{
	bst_node_t * head = NULL;
	head = node;
	while(head->left !=  NULL)
	{
		head = head->left;
	}
	return head->data;
}

int find_max(bst_node_t *node)
{
	bst_node_t * head = NULL;
	head = node;
	while(head->right !=  NULL)
	{
		head = head->right;
	}
	return head->data;
}

int main()
{
	bst_node_t *root =  NULL;
/*	int i = 0;
	for(i = 0; i < 100; i++) {
		insert_node_at_last(&root, 100 -i);
	}
*/		
	insert_node_at_last(&root, 10);
	insert_node_at_last(&root, 20);
	insert_node_at_last(&root, 5);
	insert_node_at_last(&root, 4);
	insert_node_at_last(&root, 2);
	insert_node_at_last(&root, 22);
	insert_node_at_last(&root, 80);
	
	print_inorder(root);
	printf("\n");
	
	if(search_tree(root, 80))
		printf("found data\n");
	else
		printf("not found data\n");
	printKthSmallest(root, 6);	
	printf("height of tree = %d\n",getHeight(root));	
	printf("min value is %d\n", find_min(root));
	printf("max value is %d\n", find_max(root));
	print_level_order(root);
	//printLevelOrder(root);
	return 0;
}
