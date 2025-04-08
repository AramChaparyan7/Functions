#include <stdio.h>
#define size 10

void mul(int);
void mul10(void);
int fact(int);
int sum(int);
int parz(int);
int parz_tveri_gumar(int);
float power(float,int);
int reverse(int);
void hex(int,char*,int);
int fibonachi(int);
int binary(int);

int main(){
	int num;
	scanf("%d",&num);
	mul(num);
	mul10();
	scanf("%d",&num);
	if(num < 0){ printf("No factorial for negativ numbers");}
	printf("%d\n",fact(num));
	scanf("%d",&num);
	printf("%d\n",sum(num));
	scanf("%d",&num);
	printf("%d\n",parz(num));
	scanf("%d",&num);
	printf("%d\n",parz_tveri_gumar(num));
	int exp=0;
	float base=0.0;
	scanf("%f %d",&base,&exp);
	printf("%f\n",power(base,exp));
	scanf("%d",&num);
	printf("%d\n",reverse(num));
	scanf("%d",&num);
	char arr[size]={};
	hex(num,arr,size);
	for(int i = 0;i < size;++i){
		printf("%c",arr[i]);
	}
	printf("\n");
	scanf("%d",&num);
	printf("%d\n",fibonachi(num));
	scanf("%d",&num);
	printf("%d\n",binary(num));
	return 0;
}
