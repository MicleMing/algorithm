#include <iostream>

#include "array.cpp"

void print(int value) {
  std::cout<<value<<std::endl;
}

int main(int argc, char const *argv[])
{
  List L = ListInit(5);
  ListItem item1 = newListItem(2);
  ListItem item2 = newListItem(3);
  ListItem item3 = newListItem(4);
  ListItem item4 = newListItem(5);
  ListItem item5 = newListItem(6);

  ListInsert(0, item1, L);
  ListInsert(1, item2, L);
  ListInsert(2, item3, L);
  ListInsert(3, item4, L);

  PrintList(L);

  ListDelete(1, L);

  PrintList(L);

  print(ListLocate(item4, L));
  print(ListRetrieve(1, L)->value);

  return 0;
}


