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
  // for loop
  for (int i = 0; i < 5; i++) {
    printf("for loop 1 >> %d\n", numbers[i]);
  }
  for (int i:numbers) {
    printf("for loop 2 >> %d\n", i);
  }

  // struct
  struct Dog oneDog;
  oneDog.age = 1;
  oneDog.weight = 20;
  printf("struct 1 >> %d\n", oneDog.age);
  struct Dog d2={10,4};
  printf("struct 2 >> %d\n", d2.weight);
  
  // point
  int *p1 = numbers;
  int *p2;
  p2 = &numbers[4];
  printf("point 1 >> %d, %d\n", *p1, *p2);
  for (int i=0;i<5;i++)
  printf("point 2 >> %d\n", p1[i]);

  int *p3=new int[5];
  for (int i=0;i<5;i++) {
    p3[i]=i*3;
    printf("point 3 >> %d\n", p3[i]);
  }
  delete [] p3;

  // reference
  int &ref1 = numbers[1];
  // Cannot bind >> int &ref2 = numbers;
  printf("reference 1 >> %d\n", ref1);

  // point to struct
  struct Dog *dps1 = &oneDog;
  printf("point to struct 1 >> %d\n", dps1->age);

  struct Dog *dps2 = new Dog;
  // dps2=(struct Dog *)malloc(sizeof(struct Dog)); (C)
  dps2->age=2;
  printf("point to struct 2 >> %d\n", dps2->age);



  return 0;
}