#include<stdio.h>
#include<sys/types.h>
#include<wait.h>
#include<stdlib.h>

int main(){

  pid_t pid;
  pid = fork();
  
  if(pid != 0) {
    while(1) sleep(1000);
  }
  else{
    exit(42);
  }
}
