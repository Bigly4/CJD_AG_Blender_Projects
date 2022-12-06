#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int factorial(int n) {
  int res = 1;
  for (int i = 2; i <= n; i++) {
    res *= i;
  }
  return res;
}
int main(int argc, char *argv[]) {
  if (argc < 2) {
    return -1;
  }
  int N = atoi(argv[1]);
  int fac = factorial(N);

  while (fac != 1) {
    for (int i = 2; i <= N; i++) {
      if (fac % i == 0) {
        printf("%d\n", i);
        fac /= i;
        break;
      }
    }
  }
  return 0;
}