#include <stdio.h>

int main(int argc, char *argv[])
{
  printf("%d\n",argc);
  for(int i = 0; i < argc; argc--)
  {
    printf("argv[%d] %s\n", argc, argv[argc]);
  }
}
