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

  // reading stuff
  printf("---------------- length of string \n");
  printf("%d \n", test.length);
  printf("---------------- compareString\n");
  printf("\nstring 1 and 2 %d \n", res);
  printf("string 2 and 3 %d \n", res2);
  printf("string 1 and 4 %d \n", res3);

  // slicing
  string slice1 = slice(&test, 0, 2);

  printf("\n\n---------------- Slicing strings\n\n");
  printf("%s\n", slice1.value);
  printf("%s\n", test.value);

  // replacing

  replace(&test2, "t", "a");

  printf("\n\n---------------- Replcing strings\n\n");
  printf("%s\n", test2.value);

  replaceAll(&test3, "t", "i");

  printf("\n\n---------------- ReplcingAll strings\n\n");
  printf("%s\n", test3.value);

  // upper case

  string upper = String("uppEr a z 0123");
  toUpperCase(&upper);

  printf("\n\n---------------- toOppercCase strings\n\n");
  printf("%s\n", upper.value);

  // lower case

  string lower = String("LOwEr A Z 0123");
  toLowerCase(&lower);

  printf("\n\n---------------- toOppercCase strings\n\n");
  printf("%s\n", lower.value);
}
