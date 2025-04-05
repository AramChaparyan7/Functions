float power(float num, int exp){
	float res=1;
	for(int i=0;i<exp;++i){
		res*=num;
	}
	return res;
}
