#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode newNode(int val) {
  struct ListNode a;
  a.val = val;
  a.next = 0;
  return a;
}

struct ListNode lastNode(struct ListNode list) {
  while (list.next != 0) {
    list = *(list.next);
  }
  return list;
}

void addNode(struct ListNode *list, int val) {
  struct ListNode n = newNode(val);
  (*list).next = &n;
}

void addToEnd(struct ListNode *list, int val) {
  struct ListNode last = lastNode(*list);
  addNode(&last, val);
}

void assignToEnd(struct ListNode *node, struct ListNode *newNode) {
  (*node).next = newNode;
}

struct ListNode * merge(struct ListNode *l1, struct ListNode *l2) {
  int thisNext = (*l1).val;
  int otherNext = (*l2).val;
  if (thisNext > otherNext) {

  } else {
    new
    insertAfter(l1, l2) {

    }
  }
  return l1;
}

void insertAfter(struct ListNode *n1, struct ListNode *n2) {
  struct ListNode * next = (*n1).next;
  (*n1).next = n2;
  (*n2).next = next;
}

int main(void) {

  struct ListNode a = newNode(6);
  struct ListNode b = newNode(7);
  struct ListNode c = newNode(8);

  a.next = &b;
  b.next = &c;



  struct ListNode d = newNode(19);

  assignToEnd(&c, &d);

  struct ListNode x = newNode(60);
  struct ListNode y = newNode(70);
  struct ListNode z = newNode(80);

  x.next = &y;
  y.next = &z;

  merge(&a, &x);
}
