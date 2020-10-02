int main(){
	int a, b;
	int i;
	printf("nhap a : ");
	scanf("%d", &a);
	printf("nhap b : ");
	scanf("%d", &b);
	for( i=a;i>=1;i--){
		if(a%i == 0 && b%i==0)
		break;
	}
		printf("uoc chung lon nhat cua a va b la : %d", i);
		getch();
		return 0;
}
