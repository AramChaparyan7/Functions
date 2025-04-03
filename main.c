#include <stdio.h>

int sum_int(int,int);
int square(int);
int greater_then_zero(int);
float sum_float(float,float);
int greatest(int,int);
float temperature(float);

int main(){
	int num1=0,num2=0,res=0;
	scanf("%d %d",&num1,&num2);
	res=sum_int(num1,num2);
	printf("%d\n",res);
	int number=0;
	scanf("%d",&number);
	res=square(number);
	printf("%d\n",res);
	scanf("%d",&number);
	res=greater_then_zero(number);
	printf("%d\n",res);
	float fnum1=0,fnum2=0,fres=0;
	scanf("%f %f",&fnum1,&fnum2);
	fres=sum_float(fnum1,fnum2);
	printf("%f\n",fres);
	scanf("%d %d",&num1,&num2);
	res=greatest(num1,num2);
	printf("%d\n",res);
	float fnumber=0;
	scanf("%f",&fnumber);
	fres=temperature(fnumber);
	printf("%f\n",fres);
	return 0;
}
