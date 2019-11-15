#include <stdlib.h>
#include <stdio.h>
#include <errno.h>
#include <sys/stat.h>
#include <time.h>


int main(){
  struct stat stat_buffer;
  stat("makefile", &stat_buffer);

  printf("Size of file: %lld bytes\n", stat_buffer.st_size);

  mode_t mode = stat_buffer.st_mode;


  printf("Permissions: %o\n", mode %512);
  printf("Time of last access: %s\n", ctime(&stat_buffer.st_atime));


  return 0;
}
