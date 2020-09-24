int main(){
	int n;
	printf("nhap n: ");
	scanf("%d", &n);
	int i = 1;
	int gt = 1;
	int gtk = 1;
	
	// tinh n!
	for (i; i <= n ; i++){
		gt = gt * i;
	}
	printf("gia tri cua n! la : %d\n", gt);
	
	// tinh n!!
	if(n % 2 == 1){
		for (i=1; i <= n ; i= i + 2){
		gtk = gtk * i;
	}
	printf("gia tri cua n!! la : %d", gtk);
	}else{
		for (i = 2 ; i <= n ; i= i + 2){
		gtk = gtk * i;
	}
	printf("gia tri cua n!! la : %d", gtk);
}
	getch();
	return 0;
}

