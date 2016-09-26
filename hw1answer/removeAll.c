#include<stdio.h>
#include<stdlib.h>
#include"addr.h"
#include"addrType.h"

void removeAll(){
	struct Addr* cur=NULL;
	while(head!=NULL){
	cur = head->next;
	free(head);
	head=cur;	
	}
}
