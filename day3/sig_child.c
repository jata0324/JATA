#include<stdio.h>
#include<signal.h>
#include<unistd.h>

void sig(int sig){
  printf("child die(%d)\n", getpid());
}

main(){
  signal(SIGINT,sig);
  pause();
}
