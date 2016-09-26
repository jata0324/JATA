#include<stdio.h>
#include<string.h>
#include"addr.h"
#include"addrType.h"

void modify(struct Addr* where){
		char mname[10];

		printf("변경할 이름을 입력해주세요.");
		scanf("%s",mname);
		strcpy(where->name, mname);
		
}
