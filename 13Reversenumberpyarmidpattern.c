#include <stdio.h>

int main() {

  int size = 4;
  for (int i = 0; i < size; i++) {
    for (int j = 0; j < i; j++) {
      printf(" ");
    }
    for (int k = 0; k < 2*(size-i)-1; k++) {
      printf("%d", k+1);
    }
    printf("\n");
  }
  return 0;
}