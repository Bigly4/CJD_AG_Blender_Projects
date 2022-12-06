#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc < 2)
    return -1;
  int N = atoi(argv[1]);

  unsigned long fac = 1;
  for (int i = 2; i <= N; i++) {
    fac *= i;
  }
  // printf("Faculty = %lu\n", fac);

  for (int i = 2; fac > 1;) {
    if (!(fac % i)) {
      printf("%d\n", i);
      fac /= i;
    } else
      i++;
  }
  return 0;
}