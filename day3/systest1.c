#include<stdio.h>
#include<unistd.h>

int main()
{
  puts("system()before");
  system("ls");
  puts("system()after");
}
