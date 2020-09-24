int main(){
	int a;
	printf("nhap a : ");
	scanf("%d", &a);
	int n = 1;
	float s = 0;
	
	// vong lap while tim n 
	while(s <= a){
		s = s + 1.0/n;
		n++;
	}
	printf("gia tri cua n la : %d", n);
	getch();
	return 0;
}
