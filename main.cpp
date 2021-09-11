#include <iostream>
#include <stdio.h>

using namespace std;

int main() {
  int numbers[5] = {1,2,3,4,5};
  // for loop 1
  for (int i = 0; i < 5; i++) {
    printf("%d\n", numbers[i]);
  }
  // for loop 2
  for (int i:numbers) {
    printf("%d\n", i);
  }
  return 0;
}