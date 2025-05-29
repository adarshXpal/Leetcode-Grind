#include <bits/stdc++.h>
#include <iterator>
using namespace std;

void insertAtBottom(stack<int> &st, int d) {
  if (st.empty()) {
    st.push(d);
    return;
  }
  int temp = st.top();
  st.pop();
  insertAtBottom(st, d);
  st.push(temp);
}
void reverseStack(stack<int> &st) {
  if (st.empty()) {
    return;
  }
  int temp = st.top();
  st.pop();
  reverseStack(st);
  insertAtBottom(st, temp);
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
  for (int i = 1; i <= 6; i++) {
    st.push(i);
  }
  printStack(st);
  /*insertAtBottom(st, 0);*/
  reverseStack(st);
  printStack(st);
  return 0;
}
