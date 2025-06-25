class Solution {
public:
  void solve(Node *node, int k, int currSum, int &count,
             unordered_map<int, int> &mp) {
    if (!node)
      return;
    currSum += node->data;
    if (currSum == k)
      count++;
    if (mp.find(currSum - k) != mp.end()) {
      count += mp[currSum - k];
    }
    mp[currSum]++;
    solve(node->left, k, currSum, count, mp);
    solve(node->right, k, currSum, count, mp);
    mp[currSum]--;
  }
  int sumK(Node *root, int k) {
    unordered_map<int, int> mp;
    int count = 0;
    int currSum = 0;
    solve(root, k, currSum, count, mp);
    return count;
  }
};
