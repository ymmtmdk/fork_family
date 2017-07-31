#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#include "setting.h"

extern char **environ;

void run_cmd()
{
  pid_t pid = fork();
  if (pid < 0) {
    perror("fork error");
    exit(-1);
  } else if (pid == 0) {
    execve(BIN, ARGV, environ);
  } else{
    int status;
    if (waitpid(pid, &status, 0) == -1) {
      perror("waitpid");
    }
  }
}

int main(){
  for (int i = 0; i < COUNT; i++){
    run_cmd();
  }
}
