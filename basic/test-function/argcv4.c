#include <unistd.h>


int main (int argc, char *argv[])
{
  if(argc != 2)
  {
    write(1,"a",1);
  }
  if(argc == 2)
  {
    while(argv[2])
    {
      if(argv[2] == 'a')
      {
        write(1,"a",1);
      }
      argv++;
    }
  }
  write(1,"\n",1);
  return 0;
}