#include<stdio.h>
#include"addr.h"
#include"addrType.h"

void print(struct Addr *where){

		printf("이름 : %s\n", where->name);
		printf("전화번호 : %s\n", where->tel);
		printf("주소 : %s\n", where->address);

}
