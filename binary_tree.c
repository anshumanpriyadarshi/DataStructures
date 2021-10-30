#include <stdio.h> 
#include <conio.h>
#include <malloc.h> 
#define COUNT 10

struct node {
int info;
struct node *left_child; struct node *right_child;
}node;

//CREATION OF TREE
struct node *create_tree() {
struct node *new_node; int info1; 
printf("\nEnter value:"); 
scanf("%d",&info1);
if (info1==0) {
return NULL; }
new_node=(struct node*)malloc(sizeof(struct node)); 
new_node->info=info1;
printf("\nEnter left child of %d:",info1);
new_node->left_child=create_tree();
printf("\nEnter right child %d:",info1);
new_node->right_child=create_tree();
return new_node; }

//PREORDER TRAVERSAL
void Rpreorder(struct node *node)
{
if (node!=NULL) {
printf("%d ",node->info);
Rpreorder(node->left_child);
Rpreorder(node->right_child);
}
}
 
//INORDER TRAVERSAL
void Rinorder(struct node *node) {
if(node!=NULL) {
Rinorder(node->left_child);
printf("%d ",node->info); 
Rinorder(node->right_child);
}
}

//POSTORDER TRAVERSAL
void Rpostorder(struct node *node) {

if(node!=NULL) {
Rpostorder(node->left_child); 
Rpostorder(node->right_child); 
printf("%d ",node->info);
}
}

//DISPLAY FUNCTION
void print(struct node *root,int space) {
if (root==NULL) return;
space=space+COUNT; 
print(root->right_child,space);
printf("\n");
for(int i=COUNT;i<space;i++)
printf(" ");
printf("%d\n",root->info); 
print(root->left_child,space);
}

void main() {
struct node *root; 
int ch,m,i; 
root=create_tree();
printf("\nPreorder traversal is:\n"); Rpreorder(root);
printf("\nInorder Traversal is:\n"); Rinorder(root);
printf("\nPostorder traversal is:\n"); Rpostorder(root);
print(root,0.5);
getch(); 
}