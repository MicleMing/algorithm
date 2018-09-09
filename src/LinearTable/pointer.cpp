#include <iostream>
#include "pointer.h"
using namespace std;

node NewNode(int element) {
  node p = (node)malloc(sizeof(Node));
  if (p == 0) {
    throw "Exhausted memory";
  }
  p->element = element;
  return p;
}

List initList() {
  List L = (List)malloc(sizeof(L));
  L->first = NewNode(-1);
  return L;
}

bool ListEmpty(List L) {
  return L->first->element == -1;
}

int ListRetrieve(int pos, List L) {
  int i = 0;
  node first = L->first;
  node p = first;

  if (pos < 0) {
    throw "out of bound";
  }
  while (i < pos && p) {
    p = p->next;
    i = i+1;
  }
  return p->element;
}

void InsertNode(int pos, int element, List L) {
  if (pos < 0) {
    throw "out of bound";
  }
  node newNode = NewNode(element);

  node first = L->first;
  node p = first;

  // find node
  for(int i = 1; p && i < pos; i++) {
    p = p->next;
  }
  // head insert
  if (!pos) {
    L->first = newNode;
    newNode->next = first;
  } else {
    newNode->next = p->next;
    p->next = newNode;
  }
}

int DeleteNode(int pos, List L) {
  if (pos < 0) {
    throw "out of bound";
  }
  node first = L->first;
  node p = first;
  node q;
  int element;

  // head
  if (!pos) {
    L->first = p->next;
  } else {
    for(int i = 0; i < pos && p; i++) {
      q = p;
      p = p->next;
    }
    q->next = p->next;
  }
  element = p->element;
  free(p);
  return element;
}

void PrintList(List L) {
  node first = L->first;
  node p = first;
  while(p && p->element != -1) {
    cout<<p->element<<endl;
    p = p->next;
  }
}
