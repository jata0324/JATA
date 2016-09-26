#include<stdio.h>

main(){
	FILE *fp;
	char i;

	fp = fopen("a.txt", "w");
	if(fp==NULL){
					printf("file open error");
					return;
	}

	for(i='a'; i<='z'; i++){
					fputc(i, fp);
	}
	fclose(fp);

	fp=fopen("a.txt", "r");
	if(fp==NULL){
					printf("file open error");
					return;
	}
	while((i=fgetc(fp)) !=  EOF){
		printf("%c", i);
	}
	fclose(fp);

}
