/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};
*/
class Solution {
public:
  int height(Node *node) {
    if (node == NULL) {
      return -1;
    }
    int lft = height(node->left);
    int rht = height(node->right);
    return max(lft, rht) + 1;
  }
};
