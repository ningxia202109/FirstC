#include <iostream>
#include <stdio.h>

using namespace std;

struct dog {
  int age;
  int weight;
};

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
  // struct 1
  struct dog oneDog;
  oneDog.age = 2;
  oneDog.weight = 10;
  printf("%d", oneDog.age);
  return 0;
}