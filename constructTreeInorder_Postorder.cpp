class Solution {
public:
  // Function to return a tree created from postorder and inoreder traversals.
  Node *solve(vector<int> &inorder, vector<int> &postorder, int &index, int n,
              int inorderStart, int inorderEnd, map<int, int> &mp) {
    if (index >= n || inorderStart > inorderEnd) {
      return NULL;
    }
    int element = postorder[index--];
    Node *root = new Node(element);
    int position = mp[root->data];
    root->right =
        solve(inorder, postorder, index, n, position + 1, inorderEnd, mp);
    root->left =
        solve(inorder, postorder, index, n, inorderStart, position - 1, mp);
    return root;
  }
  Node *buildTree(vector<int> inorder, vector<int> postorder) {
    // code here
    map<int, int> mp;
    int n = inorder.size();
    for (int i = 0; i < n; i++) {
      mp[inorder[i]] = i;
    }
    int index = n - 1;
    Node *root = solve(inorder, postorder, index, n, 0, n - 1, mp);
    return root;
  }
};
