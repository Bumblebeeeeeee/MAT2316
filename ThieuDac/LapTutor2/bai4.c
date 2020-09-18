int main(){
	int n ;
	printf ("nhap so nguyen n\n");
	scanf("%d", &n);
	printf("chu so hang tram la : %d\n", n/100);
	printf("chu so hang chuc la : %d\n", (n%100)/10);
	printf("chu so hang don vi la : %d\n", n%10);
	getch();
	reuturn 0;
}
