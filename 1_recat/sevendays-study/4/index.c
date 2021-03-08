#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  int d[6];
  srand((unsigned)time(NULL));
  for (int m = 0; m < 6; ++m) {
    d[m] = rand() % 10 + 1;
  }
  for (int n = 0; n < 6; ++n) {
    printf("d[%d]=%d\n", n, d[n]);
  }
}
