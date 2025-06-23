class Solution {
public:
  // Function to return a list of nodes visible from the top view
  // from left to right in Binary Tree.
  vector<int> topView(Node *root) {
    vector<int> ans;
    if (root == NULL) {
      return ans;
    }
    map<int, vector<int>> mp;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, 0));
    while (!q.empty()) {
      pair<Node *, int> temp = q.front();
      q.pop();
      mp[temp.second].push_back(temp.first->data);
      if (temp.first->left) {
        q.push(make_pair(temp.first->left, temp.second - 1));
      }
      if (temp.first->right) {
        q.push(make_pair(temp.first->right, temp.second + 1));
      }
    }
    for (auto i : mp) {
      ans.push_back(i.second[0]);
    }
    return ans;
  }
};
