// #include <stdio.h>

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

//  -------deprecated

// string slice(string *string, int start, int end) {
//   if (end != 0) {
//     char res[255];
//     int resIndex = 0;
//     for (int i = start; i < end; i++) {
//       res[resIndex] = string->value[i];
//       resIndex++;
//     }
//     res[resIndex++] = '\0';
//     struct string result = String(res);
//     return result;
//   } else {
//     return String("");
//   };
// };

string replace(string *string, char toReplace[1], char replaceValue[1]) {
  for (int i = 0; i < string->length; i++) {
    if (string->value[i] == *toReplace) {
      string->value[i] = *replaceValue;
      return *string;
    }
  }
  return *string;
}

string replaceAll(string *string, char toReplace[1], char replaceValue[1]) {
  for (int i = 0; i < string->length; i++) {
    if (string->value[i] == *toReplace) {
      string->value[i] = *replaceValue;
    }
  }
  return *string;
}

string toUpperCase(string *string) {
  for (int i = 0; i < string->length; i++) {
    if (string->value[i] >= 97 && string->value[i] <= 122) {
      string->value[i] = string->value[i] - 32;
    }
  }
  return *string;
};

string toLowerCase(string *string) {
  for (int i = 0; i < string->length; i++) {
    if (string->value[i] >= 65 && string->value[i] <= 90) {
      string->value[i] = string->value[i] + 32;
    }
  }
  return *string;
};

// to do : concat function

void concat(string *string1, string *string2, string *dest) {
  int i = 0;
  while (string1->value[i] != '\0') {
    dest->value[i] = string1->value[i];
    i++;
  }

  int j = 0;
  while (string2->value[j] != '\0') {
    dest->value[i] = string2->value[j];
    i++;
    j++;
  }
  dest->value[i] = '\0';
};

void slice(string *dest, string *source, int start, int end) {
  if (start > end) {
    return;
  }
  for (int i = 0; i < end - start; i++) {
    dest->value[i] = source->value[i + start];
  }
}

void padStart(string *dest, string *source, char padding[1]) {
  int i = 0;
  while (i < dest->length - source->length) {
    dest->value[i] = *padding;
    i++;
  }
  int j = 0;
  while (source->value[j] != '\0') {
    dest->value[i] = source->value[j];
    j++;
    i++;
  }
  dest->value[i] = '\0';
}

void padEnd(string *dest, string *source, char padding[1]) {
  int i = 0;

  while (source->value[i] != '\0') {
    dest->value[i] = source->value[i];
    i++;
  }

  while (i < dest->length) {
    dest->value[i] = *padding;
    i++;
  }

  dest->value[i] = '\0';
}
