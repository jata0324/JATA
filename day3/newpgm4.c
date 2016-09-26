#include<stdio.h>
#include<unistd.h>

main()
{

  static char *nargv[] = {"newpgm", "parm1", "parm2", "parm3", (char*) 0};
  static char *nenv[] = {"NAME=VAL", "nextname=nextvalu", "HOME=/xy", (char*)0};

  printf("this is the original program\n");
  execve("./newpgm", nargv, nenv);

  printf("this line should never get printed\n");
}
