
// functions
int getLength(char *content) {
  int length = 0;
  int i = 0;
  while (content[i] != '\0') {
    i++;
  }
  return i;
}

// actual stuff
typedef struct string {
  char *value;
  int length;
} string;

string String(char *content) {
  string newStr;
  newStr.value = content;
  newStr.length = getLength(content);

  return newStr;
}

int compareString(string *string1, string *string2) {
  if (string1->length != string2->length) {
    return (0);
  } else {
    for (int i = 0; i < string1->length; i++) {
      if (string1->value[i] != string2->value[i]) {
        return (0);
      }
    }
    return (1);
  }
};

// int slice(string *string, int start, int end = 0) {

// }