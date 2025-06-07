class Solution {
public:
  string FirstNonRepeating(string &s) {
    queue<char> q;
    string ans = s;
    vector<int> arr(26, 0);
    for (int i = 0; i < s.length(); i++) {
      arr[s[i] - 'a']++;
      q.push(s[i]);
      while (!q.empty() && arr[q.front() - 'a'] != 1) {
        q.pop();
      }
      if (q.empty()) {
        ans[i] = '#';
      } else {
        ans[i] = q.front();
      }
    }
    return ans;
  }
};
