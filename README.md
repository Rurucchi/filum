# Filum

## Is a string library in C for C.

_This library is to be used assuming you're familiar with C until I write further documentation._

**Structure :**

```c
typedef struct string {
  char *value;
  int length;
} string;
```

### Related functions :

#### **compareString**

`compareString()` Compares two strings, returns `1` if their value is equal, return `0` if their value is different.

##### Example :

Two different strings :

```c
  string string = String("test");
  string string2 = String("test2");

  int res = compareString(&string, &string2);
  printf("%d \n", res);
  // expected output : 0
```

Two strings with the same value :

```c
  string string = String("test");
  string string2 = String("test");

  int res = compareString(&string, &string2);
  printf("%d \n", res);
  // expected output : 1
```

#### **slice**

The `slice()` method extracts a section of a string and returns it as a new string, without modifying the original string.
