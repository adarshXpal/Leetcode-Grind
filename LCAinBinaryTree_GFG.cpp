class Solution {
public:
  bool lcaAnswer(Node *node, int n1, int n2, Node *&result) {
    if (node == NULL) {
      return false;
    }
    bool left = lcaAnswer(node->left, n1, n2, result);
    bool right = lcaAnswer(node->right, n1, n2, result);
    if (node->data == n1 || node->data == n2) {
      if (left || right) {
        result = node;
      }
      return true;
    }
    if (left && right) {
      result = node;
      return true;
    }
    if (left || right) {
      return true;
    }
    return false;
  }
  Node *lca(Node *root, int n1, int n2) {
    Node *result = NULL;
    lcaAnswer(root, n1, n2, result);
    return result;
  }
};
