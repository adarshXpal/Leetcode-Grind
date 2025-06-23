class Solution {
public:
  pair<int, int> answer(Node *node) {
    if (node == NULL) {
      return make_pair(-1, 0);
    }
    pair<int, int> left = answer(node->left);
    pair<int, int> right = answer(node->right);
    if (left.first == right.first) {
      pair<int, int> ans = (left.second <= right.second) ? right : left;
      ans.second += node->data;
      ans.first++;
      return ans;
    }
    pair<int, int> ans = (left.first < right.first) ? right : left;
    ans.second += node->data;
    ans.first++;
    return ans;
  }
  int sumOfLongRootToLeafPath(Node *root) { return answer(root).second; }
};
