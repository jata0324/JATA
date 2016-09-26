#include<stdio.h>
#include<stdlib.h>
#include"addr.h"

extern void addO(AD** ptr){
	AD* pnew = (AD*)malloc(sizeof(AD));
	AD* ptrr;
	ptrr=*ptr;

	printf("1.name : ");
	scanf("%s", pnew->name);
	printf("2.tel : ");
	scanf("%s", pnew->tel);
	printf("3.address : ");
	scanf("%s", pnew->address);
	
	pnew->next = NULL;

	if(ptrr=NULL){
		*ptr=pnew;
	}
	else{
		while(ptrr->next!=NULL){
			ptrr=ptrr->next;
		}
		ptrr->next=pnew;
	}

}	
