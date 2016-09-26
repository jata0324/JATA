#include<stdio.h>
#include<signal.h>
#include<stdlib.h>

void catchint(int signo)
{
  printf(" SIGINT %d Receive\n", signo);
  signal(SIGINT, SIG_DFL);
}


main()
{
  signal(SIGINT, (void *) catchint);

  printf("sleep call #1\n"); sleep(1);
  printf("sleep call #2\n"); sleep(1);
  printf("sleep call #3\n"); sleep(1);
  printf("sleep call #4\n"); sleep(1);
  printf("Exiting");
  exit(0);
}
