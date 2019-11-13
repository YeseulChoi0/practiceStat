#include <stdlib.h>
#include <stdio.h>
#include <sys/stat.h>

int main(){
  struct stat stat_buffer;
  stat("makefile", &stat_buffer);

  printf("Size of file: %ld bytes\n", stat_buffer.st_size);

  mode_t = stat_buffer.st_mode;

  printf("Permissions: %d\n", stat_buffer.st_mode);
  printf("Time of last access: %lld %ld\n", (long long)stat_buffer.st_atim.tv_sec, stat_buffer.st_atim.tv_nsec);


  return 0;
}
