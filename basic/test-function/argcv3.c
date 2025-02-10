#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int is_number(char *str)
{
  for(int i = 0; str[i] != '\0'; i++)
  {
    if(!isdigit(str[i]))
    {
      return 0;
    }
  }
  return 1;
}

int main (int argc, char *argv[])
{
  if(argc != 3)
  {
    printf("エラー: 2つの整数を入力してください。\n");
    return 1;
  }

  if(!is_number(argv[1]) || !is_number(argv[2]))
  {
    printf("エラー: 整数を入力してください。\n");
    return 1;
  }

  int num;
  num = atoi(argv[1]) * atoi(argv[2]);
  printf("積は%d\n",num);
}