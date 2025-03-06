#include <stdio.h>
#include <unistd.h>

int main(void) {
  const char msg[] = "Hello World!";
  pid_t pid = getpid();

  printf("Msg=%s, Pid=%d\n", msg, pid);

  pause();

  return 0;
}
