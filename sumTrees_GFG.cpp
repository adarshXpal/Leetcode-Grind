/*  Tree node
struct Node
{
    int data;
    Node* left, * right;
}; */

// Should return true if tree is Sum Tree, else false
class Solution {
private:
  pair<bool, int> sumTree(Node *node) {
    if (node == NULL) {
      pair<bool, int> p = make_pair(true, 0);
      return p;
    }

    pair<bool, int> left = sumTree(node->left);
    pair<bool, int> right = sumTree(node->right);
    bool temp;
    if (left.second == 0 && right.second == 0) {
      temp = true;
    } else {
      temp = node->data == left.second + right.second;
    }
    pair<bool, int> ans;
    if (left.first && right.first && temp) {
      ans.first = true;
    } else {
      ans.first = false;
    }
    ans.second = left.second + right.second + node->data;
    return ans;
  }

public:
  bool isSumTree(Node *root) { return sumTree(root).first; }
};
