#include <string.h>
#include <sys/syscall.h>
#include <unistd.h>

int main(int argc, char *argv[])
{
  char *msg = "Hello, world!\n";
  syscall(SYS_write, 1, msg, strlen(msg));

  return 0;
}