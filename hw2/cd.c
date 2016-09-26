#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>
#include<dirent.h>
#include<stdlib.h>
#include<string.h>
#include<fcntl.h>

void memoDirRead();
void memoRead();
void memoWrite();
char files[256][100];
int cnt;

void main()
{
			int menu, flag=1;

			if(access("memoDir", F_OK)!=0){
				mkdir("memoDir",0777);
				printf("memoDir 디렉토리 생성\n");
			}
			while(flag){
							puts("1.read 2.write 3.stop");
							scanf("%d", &menu);
							switch(menu){
											case 1:
															memoDirRead();
															memoRead();
															break;
											case 2 :
															memoDirRead();
															memoWrite();
															break;
											case 3:
															flag=0;
															break;
							}
			}
}

void memoDirRead(){
	DIR *dp;
	struct dirent *dire;
	cnt=0;

	dp=opendir("memoDir");
	if(dp==NULL){
		puts("directory open error");
		return;
	}

	while((dire=readdir(dp)) != NULL){
			if(strcmp(".", dire->d_name)==0 ||strcmp("..", dire->d_name)==0)
							continue;
			strcpy(files[cnt], dire->d_name);
			cnt++;
	}
	closedir(dp);
}

void memoRead(){
	int i, fd;
	char fileName[256];
	char buf;
	for(i=0; i<cnt; i++){
		printf("%d. %s\n", i, files[i]);
	}
	
	puts("select file number");
	scanf("%d", &i);
	if(i>=cnt){
		puts("wrong number");
		return;
	}
	strcpy(fileName, "memoDir/");
	strcat(fileName, files[i]);
	fileName[strlen(fileName)]='\0';

	fd=open(fileName, O_RDONLY);
	if(fd<0){
					puts("file open error");
					return;
	}

	while(read(fd,&buf, 1)==1){
		printf("%c", buf);
	}
	close(fd);
}

void memoWrite(){
	int i, fd;
	int flag=1;
	char fileName[256];
	char fileName2[256];
	char *buf;

	puts("insert file name");
	scanf("%s", fileName);

	chdir("memoDir");
	while(flag){
		for(i=0; i<cnt ; i++){
			if(strcmp(files[i], fileName)==0){
							puts("already exist");
							break;
			}
		}
		
		if(i==cnt){
			flag=0;
			fd=open(fileName, O_WRONLY||O_CREAT);
			if(fd<0){
							printf("file open error\n");
			}else{
				printf("새 파일 %s이 생성되었습니다./n", fileName);
			}
		}
	}
	
	puts("내용을 입력하세요.");
	fgets(buf, sizeof(buf), stdin);
	while(1){
					fgets(buf, sizeof(buf), stdin);
					buf[strlen(buf)-1]='\0';
					if(!strcmp(buf, "end")){
						break;
					}
					buf[strlen(buf)]='\n';
					write(fd, buf, sizeof(buf));
	}
	
	close(fd);
	chdir("..");
								
}
