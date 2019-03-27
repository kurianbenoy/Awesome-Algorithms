#include<bits/stdc++.h>

struct node 
{
	int data;
	struct node *left;
	struct node *right;
};

struct node*newnode(int element)
{
    struct node*temp=(node*)malloc(sizeof(node));
    temp->data=element;
    temp->left=temp->right=NULL;
    return temp;
}

struct node* insert(struct node* root, int data)
{
    if (root == NULL)    //If the tree is empty, return a new,single node
        return newNode(data);
    else
    {
        //Otherwise, recur down the tree 
        if (data <= root->data)
            root->left  = insert(root->left, data);
        else
            root->right = insert(root->right, data);
        //return the (unchanged) root pointer 
        return root;
    }
}

// maxdepth of tree

int maxDepth(struct node* node) 
{
    if (node==NULL) 
        return 0;
    else
    {
         /* compute the depth of each subtree */
          int lDepth = maxDepth(node->left);
          int rDepth = maxDepth(node->right);

          /* use the larger one */
          if (lDepth > rDepth) 
                return(lDepth+1);
          else 
               return(rDepth+1);
   }
}
