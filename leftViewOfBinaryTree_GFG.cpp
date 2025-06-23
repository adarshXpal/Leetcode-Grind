class Solution {
public:
  vector<int> leftView(Node *root) {
    if (root == NULL) {
      return {};
    }
    map<int, vector<int>> mp;
    queue<Node *> q;
    q.push(root);
    int level = 0;
    while (!q.empty()) {
      int size = q.size();
      vector<int> val;
      for (int i = 0; i < size; i++) {
        Node *temp = q.front();
        q.pop();
        val.push_back(temp->data);
        if (temp->left) {
          q.push(temp->left);
        }
        if (temp->right) {
          q.push(temp->right);
        }
      }
      mp[level] = val;
      ++level;
    }
    vector<int> result;
    for (auto i : mp) {
      result.push_back(i.second[0]);
    }
    return result;
  }
};
