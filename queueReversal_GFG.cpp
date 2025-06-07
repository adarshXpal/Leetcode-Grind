class Solution {
public:
  void reverse(queue<int> &q) {
    if (q.empty()) {
      return;
    }
    int temp = q.front();
    q.pop();
    reverse(q);
    q.push(temp);
    return;
  }
  queue<int> reverseQueue(queue<int> &q) {
    reverse(q);
    return q;
  }
};
