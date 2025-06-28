class Solution {
public:
  // Function to build the tree from given inorder and preorder traversals
  Node *solve(vector<int> &inorder, vector<int> &preorder, int &index, int n,
              int inorderStart, int inorderEnd, map<int, int> &mp) {
    if (index >= n || inorderStart > inorderEnd) {
      return NULL;
    }
    int element = preorder[index++];
    Node *root = new Node(element);
    int position = mp[root->data];
    root->left =
        solve(inorder, preorder, index, n, inorderStart, position - 1, mp);
    root->right =
        solve(inorder, preorder, index, n, position + 1, inorderEnd, mp);
    return root;
  }
  Node *buildTree(vector<int> &inorder, vector<int> &preorder) {
    map<int, int> mp;
    int n = inorder.size();
    for (int i = 0; i < n; i++) {
      mp[inorder[i]] = i;
    }
    int index = 0;
    Node *root = solve(inorder, preorder, index, n, 0, n - 1, mp);
    return root;
  }
};
