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
  string source = String("test");

  // testing stuff
  string dest;
  dest.length = 0;
  char buffer[3];
  dest.value = buffer;

  slice(&dest, &source, 0, 3);

  printf("\n\n---------------- Slicing strings\n\n");
  printf("%s\n", dest.value);
  printf("%s\n", source.value);

  // replacing

  replace(&test2, "t", "a");

  printf("\n\n---------------- Replcing strings\n\n");
  printf("%s\n", test2.value);

  replaceAll(&test3, "t", "i");

  printf("\n\n---------------- Replcing All strings\n\n");
  printf("%s\n", test3.value);

  // upper case

  string upper = String("uppEr a z 0123");
  toUpperCase(&upper);

  printf("\n\n---------------- toOppercCase strings\n\n");
  printf("%s\n", upper.value);

  // lower case

  string lower = String("LOwEr A Z 0123");
  toLowerCase(&lower);

  printf("\n\n---------------- toUppercCase strings\n\n");
  printf("%s\n", lower.value);

  // concat

  string hello = String("Hello ");
  string world = String("World");

  string dest2;
  dest2.length = 10;
  char buffer2[10];
  dest2.value = buffer;
  concat(&hello, &world, &dest2);

  printf("\n---------------- concat strings\n\n");
  printf("%s\n", dest2.value);

  string pad = String("test");
  string padDest;
  padDest.length = 10;
  char padbuffer[10];
  padDest.value = padbuffer;

  padStart(&padDest, &pad, "a");

  printf("\n---------------- padStart strings\n\n");
  printf("%s\n", padDest.value);

  string padDest2;
  padDest2.length = 10;
  char padbuffer2[10];
  padDest2.value = padbuffer2;

  padEnd(&padDest2, &pad, "a");

  printf("\n---------------- padEnd strings\n\n");
  printf("%s\n", padDest2.value);
}
