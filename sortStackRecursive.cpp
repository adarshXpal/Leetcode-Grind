#include <bits/stdc++.h>
using namespace std;

void insertSorted(stack<int> &st, int num) {
  if (st.empty() || st.top() < num) {
    st.push(num);
    return;
  }
  int n = st.top();
  st.pop();
  insertSorted(st, num);
  st.push(n);
}
void reverseStack(stack<int> &st) {
  if (st.empty()) {
    return;
  }
  int num = st.top();
  st.pop();
  reverseStack(st);
  insertSorted(st, num);
}
void printStack(stack<int> st) {
  while (!st.empty()) {
    cout << st.top() << " ";
    st.pop();
  }
  cout << endl;
}
int main() {
  stack<int> st;
  st.push(12);
  st.push(-1);
  st.push(10);
  st.push(4);
  st.push(-11);
  printStack(st);
  reverseStack(st);
  printStack(st);
}
