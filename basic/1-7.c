#include <stdio.h>

int main (void)
{
  //　scanfを使用する時、変数名に記号＆をつけます。
  int no;
  printf("noの値を入力してください");
  scanf("%d",&no);
  printf("noの値は%dです\n",no);
}