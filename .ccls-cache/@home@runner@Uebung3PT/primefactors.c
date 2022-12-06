#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

bool prime(int n) {
  for (int i = 2; i <= n / 2; i++) {
    if (n % i == 0) {
      return false;
    }
  }
  return true;
}
int main(int argc, char *argv[]) {
  if (argc < 2)
    return -1;
  int N = atoi(argv[1]);
  for (int i = 1; i <= N / 2; i++) {
    if (N % i == 0 && prime(i)) {
      printf("%d\n", i);
    }
  }
  return 0;
}
