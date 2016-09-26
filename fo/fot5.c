#include<stdio.h>
#include<stdlib.h>

main(int argc, char *argv[])
{
				FILE *fp;
				char buf[256];
				argv[1]="b.txt";
				if((fp=fopen(argv[1], "w+")) ==NULL)
				{
								perror("fopen error");
								exit(-1);
				}

				fputs("Input String >> " , stdout);
				gets(buf);
				fputs(buf, fp);
				rewind(fp);
				fgets(buf, sizeof(buf), fp);
				puts(buf);

				fclose(fp);
}
