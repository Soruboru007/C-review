#include <stdio.h>

int main (void)
{
  int num;
  printf("整数値を入力してください");
  scanf("%d",&num);
  printf("値から10を引いた数は%dです。",num-10);
}
