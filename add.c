#include <stdio.h>

int main() {
  int n;
  printf("Enter the number of numbers to print: ");
  scanf("%d", &n);

  for (int i = 0; i <= n; i++) {
    printf("%d\n", i);
  }

  return 0;
}

