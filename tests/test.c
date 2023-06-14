#include "../src/string.h"
#include <stdio.h>

int main() {
  string test = String("test");
  string test2 = String("test2");
  string test3 = String("test3");
  string test4 = String("test");

  int res = compareString(&test, &test2);
  int res2 = compareString(&test2, &test3);
  int res3 = compareString(&test, &test4);

  // string stuff
  printf("---------------- String stuff\n");
  printf("%d \n", test.length);
  printf("---------------- compareString\n");
  printf("\nstring 1 and 2 %d \n", res);
  printf("string 2 and 3 %d \n", res2);
  printf("string 1 and 4 %d \n", res3);
  printf("\n\n---------------- String stuff\n\n");
}
