/*

Traversals

11/20/24

@ AJ Enrique Arguello 

Objectives: What are the 3 Traversals? and How are they accomplished?

Create a video and Traverse your Binary Tree from Q1 in all 3 Forms (PreOrder, InOrder & PostOrder)

List the #s generated from each set

New Concepts: Binary trees

*/

#include <iostream>
using namespace std;

struct node { // node structure 
  int data;
  struct node* left; // pointer to left child 
  struct node* right; // pointer to right child 
};

struct node* newNode(int idata) {
  struct node* node = new struct node;
  node->data = idata;
  node->left = NULL;
  node->right = NULL;
  return node;
}

void preOrderDisplay(struct node* root) { // pre-order structure 
  if (root == nullptr) {
    return;
  }
  cout << " " << root->data;
  preOrderDisplay(root->left);
  preOrderDisplay(root->right);
}

void inOrderDisplay(struct node* root) { // in-order structure
  if (root == nullptr) {
    return;
  }
  inOrderDisplay(root->left);
  cout << " " << root->data;
  inOrderDisplay(root->right);
}

void postOrderDisplay(struct node* root) { // post-order structure 
  if (root==nullptr) {
    return;
  }
  postOrderDisplay(root->left);
  postOrderDisplay(root->right);
  cout << " " << root->data; 
}

int main() {
  struct node* root = newNode(9);
  root->left = newNode(8);
  root->right = newNode(3);
  root->left->left = newNode(4);
  
  // display tree
  cout << "Pre-Order Traversal" << endl;
  preOrderDisplay(root);

  cout << "\n\n";

  cout << "In-Order Traversal" << endl;
  inOrderDisplay(root);

  cout << "\n\n";

  cout << "Post-Order Traversal" << endl;
  postOrderDisplay(root);  
  
  // free allocated memory 
  delete root->left->left;
  delete root->left;
  delete root->right;
  delete root;

  return 0;
}
