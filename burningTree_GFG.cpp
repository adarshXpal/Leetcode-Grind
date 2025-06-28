class Solution {
public:
  Node *nodeToParent(Node *root, int target, map<Node *, Node *> &mp) {
    queue<Node *> q;
    Node *res;
    q.push(root);
    while (!q.empty()) {
      Node *temp = q.front();
      if (temp->data == target) {
        res = temp;
      }
      q.pop();
      if (temp->left) {
        mp[temp->left] = temp;
        q.push(temp->left);
      }
      if (temp->right) {
        mp[temp->right] = temp;
        q.push(temp->right);
      }
    }
    return res;
  }

  int minTime(Node *root, int target) {
    map<Node *, Node *> mp;
    Node *targetNode = nodeToParent(root, target, mp);
    queue<Node *> q;
    q.push(targetNode);
    map<Node *, int> burn;
    burn[targetNode] = 1;
    int ans = 0;
    while (!q.empty()) {
      int size = q.size();
      int flag = 0;
      for (int i = 0; i < size; i++) {
        Node *temp = q.front();
        q.pop();
        if (temp->left && !burn[temp->left]) {
          flag = 1;
          q.push(temp->left);
          burn[temp->left] = 1;
        }
        if (temp->right && !burn[temp->right]) {
          flag = 1;
          q.push(temp->right);
          burn[temp->right] = 1;
        }
        if (mp[temp] && !burn[mp[temp]]) {
          flag = 1;
          q.push(mp[temp]);
          burn[mp[temp]] = 1;
        }
      }
      if (flag == 1) {
        ans++;
      }
    }
    return ans;
  }
};
