#include <iostream>
#include <string>

using namespace std;

int TEST_INT(string describe, int input, int expect) {
  if(input == expect) {
    cout<<"[SUCCESS]:" + describe<<endl;
    return 0;
  }
  cout<<"[FAILURE]:" + describe<<endl;
  cout<<"[INPUT]:";
  cout<<input<<endl;
  cout<<"[EXPECT]:";
  cout<<expect<<endl;
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


// template<typename T, unsigned N, unsigned C>

// int TEST_ARRAY(string describe, T (&input)[N], T (&expect)[C]) {
//   if (N != C) {
//     cout<<"[FAILURE]:" + describe<<endl;
//     return 1;
//   }
//   for(int i = 0; i < N; i++) {
//     if (input[i] != expect[i]) {
//       cout<<"[FAILURE]:" + describe<<endl;
//       return 1;
//     }
//   }
//   cout<<"[SUCCESS]:" + describe<<endl;
//   return 0;
// }

template<typename T>

int TEST_ARRAY(string describe, T* input, int size1, T* expect, int size2) {
  if (size1 != size2) {
    cout<<"[FAILURE]:" + describe<<endl;
    return 1;
  }
  for(int i = 0; i < size1; i++) {
    if (input[i] != expect[i]) {
      cout<<"[FAILURE]:" + describe<<endl;
      return 1;
    }
  }
  cout<<"[SUCCESS]:" + describe<<endl;
  return 0;
}
