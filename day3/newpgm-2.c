#include<stdio.h>
#include<stdlib.h>
main()
{
  static char *nargv[]={"newpgm", "parm1", "parm2", "parm3", (char *) 0};
  printf("this is the original program\n");
  execv("./newpgm", nargv);
  printf("this line should never het printed\n");
}
