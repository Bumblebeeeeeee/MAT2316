int main(){
	int n ;
	printf("nhap so nguyen n :\n");
	scanf("%d", &n);
	if(n - sqrt(n)*sqrt(n) == 0){
		printf("n la so chinh phuong !");
	}else{
		printf("n la khong la so chinh phuong !");
	}
	getch();
	return 0;
}
