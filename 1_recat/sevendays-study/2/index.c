# include<stdio.h>

void main() {
  /*
   変数の宣言ははじめに行わないといけない
  */
  int a; // 変数宣言
  int b = 3; // 初期化と同時に宣言
  int add, sub; // 複数の変数を同時に宣言
  double avg; // int以外の変数を宣言
  a = 6;
  add = a + b;
  sub = a - b;
  avg = (a + b) / 2.0;
  printf("add %d\n", add);
  printf("sub %d\n", sub);
  printf("abg %f\n", avg);
}
