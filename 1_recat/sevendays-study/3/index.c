#include <stdio.h>

void main() {
  int a;
  printf("整数を入力");
  scanf("%d", &a);
  if (a > 0) {
    printf("入力した値は,正の数です。\n");
  } else {
    printf("入力した値は負の数です。\n");
  }
}
