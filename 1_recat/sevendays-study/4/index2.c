#include <stdio.h>

int main() {
  double d[] = { 1.2, -1.3, 5.2, 4.8 };
  for (int m = 1; m < 4; ++m) {
    printf("d[%d]=%f\n", m, d[m]);
  }
}
