#include <iostream>
#include <stdio.h>

using namespace std;

struct Dog {
  int age;
  int weight;
  char name;
};

struct Dog d3;

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
  printf("\n\n");
  // struct 1
  struct Dog oneDog;
  oneDog.age = 1;
  oneDog.weight = 20;
  printf("%d\n", oneDog.age);
  printf("\n\n");
  // struct 2
  struct Dog d2={10,4};
  printf("%d\n", d2.weight);
  return 0;
}