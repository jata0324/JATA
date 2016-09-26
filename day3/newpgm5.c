#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
main()
{

  if(fork() ==0){
    execl("/bin/echo", "echo", "this is", "message one", (char*)0);
    printf("exec on failed");
    exit(1);
  }

  printf("Parent program ending\n");
}
