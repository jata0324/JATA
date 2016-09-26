#include <stdio.h>
#include <stdlib.h>
#include "addr.h"

extern void list(AD* ptr){
	AD* ptrr;
	ptrr=ptr;

	while(ptrr!=NULL){
	
		printf("name : %s\n", ptrr->name);
		printf("tel : %s\n", ptrr->tel);
		printf("address : %s\n", ptrr->address);
		ptrr=ptrr->next;
	}

}
