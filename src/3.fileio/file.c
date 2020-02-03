#include "apue.h"
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void)
{
  char buf[BUFSIZ];
  int fd = open("Makefile", O_RDWR);
  if (fd != -1)
  {
    lseek(fd, 0, SEEK_SET);
    read(fd, buf, 100);
    write(STDOUT_FILENO, buf, 100);
  }
  exit(0);
}