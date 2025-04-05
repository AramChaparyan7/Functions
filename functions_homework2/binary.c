int reverse(int);

int binary(int num){
	int res=0,zero_count=1,flag=1;;
	while(num>0){
		res*=10;
		res+=num%2;
		if(num%2==0 && flag){
			zero_count*=10;
		}else{
			flag=0;
		}
		num/=2;
	}
	res=reverse(res);
	res*=zero_count;
	return res;
}
