/* A binary tree node structure

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
 */

class Solution {
private:
  pair<bool, int> solution(Node *root) {
    if (root == NULL) {
      pair<bool, int> p = make_pair(true, -1);
      return p;
    }
    pair<bool, int> left = solution(root->left);
    pair<bool, int> right = solution(root->right);
    bool leftCheck = left.first;
    bool rightCheck = right.first;
    bool finalCheck = abs(left.second - right.second) <= 1;
    pair<bool, int> ans;
    if (leftCheck && rightCheck && finalCheck) {
      ans.first = true;
    } else {
      ans.first = false;
    }
    ans.second = max(left.second, right.second) + 1;
    return ans;
  }

public:
  bool isBalanced(Node *root) {
    pair<bool, int> ans = solution(root);
    return ans.first;
  }
};
