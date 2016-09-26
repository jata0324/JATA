#include<stdio.h>
#include<unistd.h>
#include<dirent.h>
#include<sys/types.h>


int main()
{
  if(fork() == 0){
  DIR *dp;
  struct dirent *dirp;

  dp = opendir(".");
  while(dirp = readdir(dp))
    {
      printf("%s\n", dirp->d_name);
    }
  puts("");

  closedir(dp);
  }
  return 0;
}
