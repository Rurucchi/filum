
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

// methods

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

string slice(string *string, int start, int end) {
  // limit length
  if (string->length > 255) {
    return String("");
  }
  //
  else {
    if (end != 0) {
      char res[255];
      int resIndex = 0;
      for (int i = start; i < end; i++) {
        res[resIndex] = string->value[i];
        resIndex++;
      }
      res[resIndex++] = '\0';
      struct string result = String(res);
      return result;
    } else {
      return String("");
    };
  }
};

string replace(string *string, char arg[1]) {
  for (int i = 0; i < string->length; i++) {
    if (string->value[i] == *arg) {
      string->value[i] = *arg;
      return *string;
    }
  }
}