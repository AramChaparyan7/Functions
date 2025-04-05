int fibonachi(int num){
	int a=1,b=1;
	for(int i=1;i<num;++i){
		b=a+b;
		a=b-a;
	}
	return a;
}
