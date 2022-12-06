#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int get_int_len(int value) {
  int x = 1;
  while (value > 9) {
    x++;
    value /= 10;
  }
  return x;
}

int power(int x, int n) {
  int res = 1;
  for (int i = 0; i < n; ++i)
    res *= x;
  return (res);
}

bool isArmstrong(int n) {
  int l = get_int_len(n);

  int a = 0;
  int rest = n;
  for (int j = l - 1; j >= 0; j--) {
    int dec_pow = power(10, j);
    int digit = (rest - (rest % (dec_pow))) / (dec_pow);
    rest -= digit * dec_pow;
    a += power(digit, l);
  }
  return (a == n);
}

int main(int argc, char *argv[]) {
  if (argc < 2)
    return -1;
  int N = atoi(argv[1]);
  for (int i = 0; i < N; i++) {
    if (isArmstrong(i)) {
      printf("%d\n", i);
    }
  }
  return 0;
}
