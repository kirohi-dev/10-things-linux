#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
  int n;
  srand((unsigned)time(NULL));
  n = rand() % 6 + 1;
  printf("整数: %d\n", n);
}
