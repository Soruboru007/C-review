#include <stdio.h>

//Q1. コマンドライン引数の個数を表示するプログラムを作成せよ。
int main(int argc,char *argv[])
{
  printf("%d\n",argc);
  for(int i = 0; i < argc; i++)
  {
    printf("argv[%d] %s\n", i, argv[i]);
  }
}