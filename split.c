#include <stdio.h>


int split(char *src, char *dst[], char delim) {
  int count = 0;

  while(1) {
    while (*src == delim) {
      src++;
    }

    if (*src == '\0') {
      break;
    }

    dst[count++] = src;

    while(*src && *src != delim) {
      src++;
    }

    if (*src == '\0') {
      break;
    }
    *src++ = '\0';
  }

  return count;
}


int main() {

  char src[] = "aaa,bbb,ccc";
  char *dst[10];
  int count = split(src, dst, ',');
  int i;
  for (i = 0; i < count; ++i) {
    printf("%s\n", dst[i]);
  }
  return 0;
}
