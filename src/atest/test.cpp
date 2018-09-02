#include <iostream>
#include "string"

using namespace std;

int TEST_INT(string describe, int input, int expect) {
  if(input == expect) {
    cout<<"[SUCCESS]:" + describe<<endl;
    return 0;
  }
  cout<<"[FAILURE]:" + describe<<endl;
  return 1;
}

int TEST_STRING(string describe, int input, int expect) {
  if(input == expect) {
    cout<<"[SUCCESS]:" + describe<<endl;
    return 0;
  }
  cout<<"[FAILURE]:" + describe<<endl;
  return 1;
}

int TEST_ARRAY(string describe, int *input, int *expect) {
  int inputLen = sizeof(input) / sizeof(int);
  int expectLen = sizeof(expect) / sizeof(int);
  if (inputLen != expectLen) {
    cout<<"[FAILURE]:" + describe<<endl;
    return 1;
  }
  for(int i = 0; i < expectLen; i++) {
    if (input[i] != expect[i]) {
      cout<<"[FAILURE]:" + describe<<endl;
      return 1;
    }
  }
  cout<<"[SUCCESS]:" + describe<<endl;
  return 0;
}
