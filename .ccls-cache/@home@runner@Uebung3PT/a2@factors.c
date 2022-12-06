#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc < 2)
    return -1;
  int N = atoi(argv[1]);

  // printf("N = %d\n", N);

  for (int i = 1; i < N; i++) {
    if (!(N % i))
      printf("%d\n", i);
  }
  return 0;
}