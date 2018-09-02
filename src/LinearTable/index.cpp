#include <iostream>

#include "array.cpp"
#include "../atest/test.cpp"

using namespace std;

void print(int value) {
  cout<<value<<endl;
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

  int expect[] = { 2, 3, 4, 5};

  TEST_ARRAY("init L", GetValue(L), expect);

  ListItem dItem = ListDelete(1, L);
  TEST_INT("delete item", dItem->value, 3);

  int expect2[] = { 2, 4, 5 };
  TEST_ARRAY("after delete", GetValue(L), expect2);

  TEST_INT("element local in link", ListLocate(item4, L), 2);

  TEST_INT("get element in ", ListRetrieve(1, L)->value, 4);

  return 0;
}


