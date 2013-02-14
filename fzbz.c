#include <stdio.h>

int main() {

  int N = 100;
  unsigned char b = 33;

  for (int i = 1; i <= N; i++) {
    if (!(b & 144))
      printf("%d", i);

    if (b & 128)
      printf("Fizz");

    if (b & 16) {
      printf("Bazz");
      b -= 16;
    }

    printf("\n");

    b = b << 1;

    if (!(b & 193))
      b |= 32;

    if (!(b & 31))
      b |= 1;
  }
  return 0;
}
