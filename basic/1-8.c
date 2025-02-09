#include <stdio.h>

int main (void)
{
  int num;
  printf("整数値を入力してください。");
  scanf("%d",&num);
  printf("その値に１０を加えた数は%dです。",num+10);
}