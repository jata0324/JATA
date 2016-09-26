#include<stdio.h>
#include"addr.h"
#include"addrType.h"

void printAll(){
	struct Addr* cur = head;
	while(cur!=NULL){
		printf("name:%s\n",cur->name);
		printf("tel:%s\n",cur->tel);
		printf("address:%s\n",cur->address);
		cur=cur->next;
	}
}
