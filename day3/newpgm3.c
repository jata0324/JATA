#include<stdio.h>
#include<unistd.h>

main(){

  static char *nargv[] = {"newpgm", "parm1", "parm2", "parm3", (char *) 0};
  printf("this is the original program\n");

  execvp("newpgm", nargv);

  printf("this line should never get printed\n");
}
