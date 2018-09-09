#include <iostream>
#include "pointer.cpp"
#include "../atest/test.cpp"

using namespace std;

void print(int value) {
  cout<<value<<endl;
}

int main(int argc, char const *argv[])
{
  List L = initList();
  InsertNode(0, 1, L);
  TEST_INT("Head element is 1", ListRetrieve(0, L), 1);
  InsertNode(1, 3, L);
  TEST_INT("Seccond element is 3", ListRetrieve(1, L), 3);
  InsertNode(1, 2, L);
  TEST_INT("Second element is 2", ListRetrieve(1, L), 2);
  InsertNode(3, 4, L);
  TEST_INT("Fourth element is 4", ListRetrieve(3, L), 4);
  TEST_INT("Delete fourth element which is 4", DeleteNode(3, L), 4);
  TEST_INT("Delete Head element which is 1", DeleteNode(0, L), 1);
  InsertNode(0, 1, L);
  TEST_INT("Delete Second element which is 2", DeleteNode(1, L), 2);
  PrintList(L);
  return 0;
}
