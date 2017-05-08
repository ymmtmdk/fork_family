#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>
#include "config.h"

int main(){
  for (int i = 0; i < COUNT; i++){
    system("echo abc def");
  }
}
