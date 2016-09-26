#include<stdio.h>
#include<stdlib.h>
#include"addr.h"
#include"addrType.h"

void add(){
	struct Addr* cur = (struct Addr*)malloc(sizeof(struct Addr));
	printf("name: ");
	scanf("%s", cur->name);
	printf("tel: ");
	scanf("%s", cur->tel);
	printf("address: ");
	scanf("%s", cur->address);
	if(head==NULL){
		head=cur;
	}else{
		tail->next = cur;
	}
	tail = cur;
	tail->next=NULL;

}
