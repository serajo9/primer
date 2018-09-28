int factorial (int n){
	int i;
	int res = 1;

	for (i = 0, i <= n; ++i) {
		res = res * i;
	}
	return res;
}