#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
  if(argc < 3 || argc > 3)
  {
    printf("エラー: 2つの整数を入力してください。\n");
    return 1;
  }
  int num;
  num = atoi(argv[1]) * atoi(argv[2]);
  printf("積は%d\n",num);
}