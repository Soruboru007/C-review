#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("引数の数%d\n",argc);
  for(int i = argc - 1; i >= 0; i--)
  {
    printf("argv[%d] %s\n", i, argv[i]);
  }
}
