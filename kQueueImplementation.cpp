#include <bits/stdc++.h>
using namespace std;

class kQueue {
public:
  int k;
  int n;
  int freespot;
  int *arr;
  int *front;
  int *rear;
  int *next;

  kQueue(int n, int k) {
    this->n = n;
    this->k = k;
    freespot = 0;
    arr = new int[n];
    next = new int[n];
    front = new int[k];
    rear = new int[k];
    for (int i = 0; i < n; i++) {
      next[i] = i + 1;
    }
    next[n - 1] = -1;
    for (int i = 0; i < k; i++) {
      front[i] = -1;
      rear[i] = -1;
    }
  }

  void enqueue(int d, int q) {
    if (freespot == -1) {
      cout << "OVERFLOW QUEUE !!" << endl;
      return;
    }
    int index = freespot;
    freespot = next[index];
    if (front[q - 1] == -1) {
      front[q - 1] = index;
    }
    next[rear[q - 1]] = index;
    next[index] = -1;
    rear[q - 1] = index;
    arr[index] = d;
  }

  void dequeue(int q) {
    if (front[q - 1] == -1) {
      cout << "QUEUE IS EMPTY !!" << endl;
      return;
    }
    int index = front[q - 1];
    if (front[q - 1] == rear[q - 1]) {
      rear[q - 1] = -1;
    }
    front[q - 1] = next[index];
    next[index] = freespot;
    freespot = index;
    arr[index] = -1;
  }
};

int main() {
  kQueue q(6, 2);
  q.enqueue(1, 1);
  q.enqueue(8, 2);
  q.enqueue(6, 2);
  q.enqueue(3, 1);
  q.enqueue(30, 2);
  q.enqueue(-10, 1);
  q.dequeue(1);
  q.dequeue(1);
  q.dequeue(1);
  q.dequeue(1);
  q.dequeue(1);
  q.dequeue(1);
  q.enqueue(22, 1);
  q.enqueue(21, 1);
  cout << q.front[0] << endl;
  cout << q.rear[0] << endl;
  cout << q.arr[q.front[0]] << endl;
  cout << q.arr[q.front[1]] << endl;
  cout << q.arr[q.rear[0]] << endl;
  cout << q.arr[q.rear[1]] << endl;
}
