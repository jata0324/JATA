#include<stdio.h>
#include"addr.h"

void addO(AD** ptr);
void list(AD* ptr);


int main(){
	int menu;
	pst = NULL;

	while(1){
	printf("insert menu_num (1.add 2.list 3.exit) : ");
	scanf("%d", &menu);
	
	switch(menu){
		case 1:
			addO(&pst);
			break;
		case 2:
			list(pst);
			break;
		case 3:
			return 0;
	}

	fflush(stdin);
	}
	
}
