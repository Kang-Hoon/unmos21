#include <stdio.h>
#include <stdlib.h>

int add(int a, int b) {
  int c = a + b;
  printf("%d\n\n",c);
  return 0;
}

int main() {
  printf("Hello World\n\n");
  add (1,2);
}