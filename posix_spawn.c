#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#include <unistd.h>
#include <spawn.h>
#include <sys/wait.h>

#include "setting.h"

extern char **environ;

void run_cmd()
{
  pid_t pid;
  int status;
  status = posix_spawn(&pid, BIN, NULL, NULL, ARGV, environ);
  if (status == 0) {
    if (waitpid(pid, &status, 0) == -1) {
      perror("waitpid");
    }
  } else {
    printf("posix_spawn: %s\n", strerror(status));
  }
}

int main(int argc, char* argv[])
{
  for (int i = 0; i < COUNT; i++){
    run_cmd();
  }
  return 0;
}
