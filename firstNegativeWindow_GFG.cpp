class Solution {
public:
  vector<int> firstNegInt(vector<int> &arr, int k) {
    vector<int> ans;
    queue<int> q;
    int s = 0, e = k - 1;
    for (int i = 0; i < arr.size(); i++) {
      if (arr[i] < 0) {
        q.push(i);
      }
    }
    while (s < arr.size() && e < arr.size()) {
      if (!q.empty() && (q.front() >= s && q.front() <= e)) {
        if (q.front() == s) {
          ans.push_back(arr[q.front()]);
          q.pop();
        } else {
          ans.push_back(arr[q.front()]);
        }
      } else {
        ans.push_back(0);
      }
      s++;
      e++;
    }
    return ans;
  }
};
