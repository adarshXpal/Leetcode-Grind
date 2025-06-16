/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};

Node* newNode(int val) {
    return new Node(val);
}
*/

class Solution {
private:
  pair<int, int> fastdiameter(Node *node) {
    if (node == NULL) {
      pair<int, int> p = make_pair(0, -1);
      return p;
    }
    pair<int, int> left = fastdiameter(node->left);
    pair<int, int> right = fastdiameter(node->right);

    int op1 = left.first;
    int op2 = right.first;
    int op3 = left.second + right.second + 2;
    pair<int, int> ans;
    ans.first = max(op1, max(op2, op3));
    ans.second = max(left.second, right.second) + 1;
    return ans;
  }

public:
  int diameter(Node *root) {
    pair<int, int> ans = fastdiameter(root);
    return ans.first;
  }
};
