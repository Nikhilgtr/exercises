#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

void preOrder( struct node *root) {
  
	if( root == NULL ) 
      return;
	printf("%d ",root->data);
	preOrder(root->left);
	preOrder(root->right);
  
}

/* you only have to complete the function given below.  
node is defined as  

struct node {
    
    int data;
    struct node *left;
    struct node *right;
  
};

*/

struct node * create_node(int data)
{
    struct node *cur = malloc(sizeof(struct node));
    cur->data = data;
    cur->left = NULL;cur->right = NULL;
    return cur;
}

struct node* insert( struct node* root, int data ) {
	if(root == NULL)
    {
        root = create_node(data);
    }
    else if(root->data < data)
        insert(root->right,data);
    else
        insert(root->left,data);
    return root;
}


int main() {
  
    struct node* root = NULL;
    
    int t;
    int data;

    scanf("%d", &t);

    while(t-- > 0) {
        scanf("%d", &data);
        root = insert(root, data);
    }
  
	preOrder(root);
    return 0;
}

