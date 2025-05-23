#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

class Node {
public:
  int data;
  Node *next;

  Node(int d) {
    this->data = d;
    this->next = NULL;
  }
  ~Node() { cout << "Node is deleted with data: " << this->data << "\n"; }
};
void insertAtHead(Node *&head, int d) {
  Node *temp = new Node(d);
  temp->next = head;
  head = temp;
}
void print(Node *&head) {
  Node *temp = head;
  while (temp) {
    cout << temp->data << " ";
    temp = temp->next;
  }
  cout << "\n";
}

Node *removeDuplicates(Node *&head) {
  unordered_map<int, int> mp;
  Node *temp = head;
  while (temp) {
    mp[temp->data]++;
    temp = temp->next;
  }
  Node *curr = head;
  Node *prev = NULL;
  while (curr) {
    if (mp[curr->data] > 1) {
      mp[curr->data]--;
      Node *node2delete = curr;
      if (curr == head) {
        head = curr->next;
        curr = head;
      } else {
        prev->next = curr->next;
        curr = curr->next;
      }
      delete node2delete;

    } else {
      prev = curr;
      curr = curr->next;
    }
  }
  return head;
}

int main() {
  Node *node1 = new Node(4);
  Node *head = node1;
  Node *tail = node1;
  insertAtHead(head, 2);
  insertAtHead(head, 8);
  insertAtHead(head, 0);
  insertAtHead(head, -12);
  insertAtHead(head, 0);
  insertAtHead(head, 8);
  print(head);
  removeDuplicates(head);
  print(head);
  cout << "Head is at: " << head->data << "\n";
  return 0;
}
