class Solution {
public:
  // Function to return the maximum sum of non-adjacent nodes.
  pair<int, int> solve(Node *node) {
    if (!node)
      return make_pair(0, 0);
    pair<int, int> left = solve(node->left);
    pair<int, int> right = solve(node->right);
    pair<int, int> ans;
    ans.first = node->data + left.second + right.second;
    ans.second = max(left.first, left.second) + max(right.first, right.second);
    return ans;
  }
  int getMaxSum(Node *root) {
    pair<int, int> ans = solve(root);
    return max(ans.first, ans.second);
  }
};
