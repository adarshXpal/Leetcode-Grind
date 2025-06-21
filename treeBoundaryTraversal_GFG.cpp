class Solution {
public:
  void leftBoundary(Node *&node, vector<int> &ans) {
    if (node == NULL || (node->left == NULL && node->right == NULL)) {
      return;
    }
    ans.push_back(node->data);
    if (node->left) {
      leftBoundary(node->left, ans);
    } else {
      leftBoundary(node->right, ans);
    }
    return;
  }

  void leafNode(Node *&node, vector<int> &ans) {
    if (node == NULL) {
      return;
    }
    if (node->left == NULL && node->right == NULL) {
      ans.push_back(node->data);
      return;
    }
    if (node->left) {
      leafNode(node->left, ans);
    }
    if (node->right) {
      leafNode(node->right, ans);
    }
  }
  void rightBoundary(Node *&node, vector<int> &ans) {
    if (node == NULL || (node->left == NULL && node->right == NULL)) {
      return;
    }
    if (node->right) {
      rightBoundary(node->right, ans);
    } else {
      rightBoundary(node->left, ans);
    }
    ans.push_back(node->data);
    return;
  }

  vector<int> boundaryTraversal(Node *root) {
    vector<int> ans;
    if (root == NULL) {
      return ans;
    }
    ans.push_back(root->data);
    leftBoundary(root->left, ans);
    leafNode(root->left, ans);
    leafNode(root->right, ans);
    rightBoundary(root->right, ans);
  }
};
