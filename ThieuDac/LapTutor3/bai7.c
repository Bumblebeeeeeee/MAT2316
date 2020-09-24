int main(){
	int i, n;
	float x, p;
	printf("nhap x : ");
	scanf("%f", &x);
	p = x ;
	printf("nhap n : ");
	scanf("%d", &n);
	for(i = 1; i <= n ; i++ ){
		printf("%f", p);
		p = p * (x * x) / (i*( i + 1 ));
		
	}
	printf("sin(x) = %f", p);
}
