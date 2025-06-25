class Solution {
public:
  bool solve(Node *root, int k, int node, int &ans, int &count) {
    if (!root) {
      return false;
    }
    if (root->data == node) {
      return true;
    }
    bool left = solve(root->left, k, node, ans, count);
    bool right = solve(root->right, k, node, ans, count);
    if (left || right) {
      count++;
      if (count == k) {
        ans = root->data;
      }
      return true;
    }
    return false;
  }
  int kthAncestor(Node *root, int k, int node) {
    int ans = -1;
    int count = 0;
    bool result = solve(root, k, node, ans, count);
    return ans;
  }
};
