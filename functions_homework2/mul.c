#include <stdio.h>

void mul(int num){
	for(int i=1;i<=10;++i){
		printf("%d*%d=%d ",num,i,num*i);
	}
	printf("\n");
}
