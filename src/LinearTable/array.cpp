#include <iostream>

#include "array.h"

ListItem newListItem(int value) {
  ListItem item = (ListItem)malloc(sizeof *item);
  item->value = value;
  return item;
}

List ListInit(int size) {
  List L = (List)malloc(sizeof *L);
  L->table = (ListItem *)malloc(size * sizeof(ListItem));
  L->maxsize = size;
  L->n = 0;
  return L;
}

int ListEmpty(List L) {
  return L->n == 0;
}

int ListLength(List L) {
  return L->n;
}

ListItem ListRetrieve(int k, List L) {
  if (k < 0 || k > L->n) {
    throw "out of bound";
  }
  return L->table[k];
}

void ListInsert(int k, ListItem x, List L) {
  if(k < 0 || k > L->n) {
    throw "out of bound";
  }
  if (L->n == L->maxsize) {
    throw "out of memory";
  }
  for (int i = k; i < L->n; i++) {
    L->table[k+1] = L->table[k];
  }
  L->n = L->n + 1;
  L->table[k] = x;
}

int ListLocate(ListItem x, List L) {
  for(int i = 0; i < L->n; i++) {
    if (L->table[i] == x) {
      return i;
    }
  }
  return -1;
}

ListItem ListDelete(int k, List L) {
  if(k < 0 || k > L->n) {
    throw "out of bound";
  }

  ListItem item = L->table[k];
  for (int i = k; i < L->n - 1; i++) {
    L->table[i] = L->table[i+1];
  }
  L->n = L->n - 1;
  return item;
}

void PrintList(List L) {
  for(int i = 0; i < L->n; i++) {
    std::cout<<L->table[i]->value<<std::endl;
  }
  std::cout<<'\n'<<std::endl;
}
