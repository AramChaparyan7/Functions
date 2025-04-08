int parz(int);

int parz_tveri_gumar(int num){
	for(int i=2;i<=num/2;++i){
		if(parz(i) && parz(num-i)){
			return 1;
		}
	}
	return 0;
}
