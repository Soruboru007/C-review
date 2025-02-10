#include <stdio.h>
#include <stdlib.h>
int main (int argc, char *argv[])
{
  int num;
  num = atoi(argv[1]) * atoi(argv[2]);
  printf("積は%d\n",num);
}