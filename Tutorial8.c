#include <stdio.h> 
#include <stdlib.h> 
struct Node 
{ 
int data; 
struct Node *left; 
struct Node *right; 
}; 
struct Node *createNode(int value) 
{ 
struct Node *newNode = 
(struct Node *)malloc(sizeof(struct Node)); 
if (newNode == NULL) 
return NULL; 
newNode->data = value; 
newNode->left = NULL; 
newNode->right = NULL; 
return newNode; 
} 
struct Node *insert(struct Node *root, int value) 
{ 
if (root == NULL) 
return createNode(value); 
if (value < root->data) 
root->left = insert(root->left, value); 
else if (value > root->data) 
root->right = insert(root->right, value); 
return root; 
} 
struct Node *search(struct Node *root, int key) 
{ 
if (root == NULL || root->data == key) 
return root; 
if (key < root->data) 
return search(root->left, key); 
return search(root->right, key); 
} 
int main() 
{ 
struct Node *root = NULL; 
struct Node *result; 
root = insert(root, 100); 
root = insert(root, 78); 
root = insert(root, 59); 
root = insert(root, 27); 
root = insert(root, 89); 
root = insert(root, 79); 
int key = 78; 
result = search(root, key); 
if (result != NULL) 
printf("Element found: %d\n", result->data); 
else 
printf("Element not found\n"); 
return 0; 
}
