#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool prime(int p) {
  for (int i = 2; i <= p / 2; i++) {
    if (p % i == 0)
      return false;
  }
  return true;
}

int main(int argc, char *argv[]) {
  if (argc < 2)
    return -1;
  int N = atoi(argv[1]);

  // printf("N = %d\n", N);

  for (int i = 2; i <= N / 2; i++) {
    if (!(N % i) && prime(i)) {
      // N /= i;
      printf("%d\n", i);
    }
  }
  if (prime(N)) {
    printf("%d\n", N);
  }
  return 0;
}