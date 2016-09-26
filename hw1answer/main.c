#include<stdio.h>
#include<stdlib.h>
#include"addrType.h"

struct Addr *head=NULL, *tail=NULL;

void add();
void print(struct Addr *where);
void printAll();
void removeAll();
void modify(struct Addr* where);
struct Addr* search(char *name);

void main(){
	int flag=1, menu;
	char sname[10];
	FILE *fp;
	struct Addr *cur;

	if((fp=fopen("student.dat", "r")) ==NULL){
					perror("fopen error");
					exit(-1);
	}

	while(1){
		cur = (struct Addr*)malloc(sizeof(struct Addr));
		if(fread(cur, sizeof(struct Addr), 1, fp)==1){
						if(head==NULL){
										head=cur;
						}else{
										tail->next=cur;
						}
										tail=cur;
										tail->next=NULL;
		}else{
						free(cur);
						break;
		}	
	}
	
	fclose(fp);


	while(flag){
		printf("1.추가 2.검색 3.수정 4.삭제 5.전체출력 6.종료\n");
		scanf("%d", &menu);
		switch(menu){
			case 1:
			add();
			break;
			case 2:
			printf("검색할 이름을 입력하세요.");
			scanf("%s",sname);
			if(search(sname)==NULL){
							printf("입력하신 정보로 조회되는 값이 없습니다.\n");
			}else{
				print(search(sname));
			}
			break;
			case 3:
			printf("수정할 이름을 입력하세요.");
			scanf("%s", sname);
			if(search(sname)==NULL){
				printf("입력하신 정보로 조회되는 값이 없습니다.\n");
			}else{
				modify(search(sname));
				print(search(sname));
			}
			break;
			case 4:
			
			break;
			case 5:
			printAll();
			break;
			case 6:
				fp=fopen("student.dat", "w");
				cur = head;
				while(cur!=NULL){

					fwrite(cur, sizeof(struct Addr), 1, fp);
					cur = cur->next;
				}
				fclose(fp);
			  flag=0;
				removeAll();
		}	
	
	}

}
