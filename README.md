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

**compareString**
`compareString()` Compares two strings, returns `1` if their value is equal, return `0` if their value is different.
