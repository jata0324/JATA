#include<stdio.h>
#include<string.h>
#include"addr.h"
#include"addrType.h"

struct Addr* search(char *name){
	struct Addr* cur = head;
	while(cur!=NULL){
		if(strcmp(cur->name, name)==0){
			return cur;
		}
		else{
			cur=cur->next;
		}
	}

	return NULL;
}
