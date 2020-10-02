int giaithua(int n){
	int i;
	long int gt = 1;
	for (i = 1; i <= n ; i++){
		gt = gt * i;
	}
	return gt;
}

int chinhhop(int n, int k){
	int c; 
	c = giaithua(n) * giaithua(n - k);
	return c;
}

int tohop(int n, int k){
	int t;
	t = (giaithua(n))/(giaithua(k) * giaithua(n - k));
	return t;	
}

int main(){
	int n, k, A, P, Q, C;
	printf("nhap n :");
	scanf("%d", &n);
	printf("nhap k :");
	scanf("%d", &k);
	A = chinhhop(n, k);
	printf("chinh hop chap %d cua %d phan tu : %d\n",k, n, A);
	P = giaithua(n);
	printf("hoan vi cua %d phan tu :%d\n", n, P);
	Q = giaithua(n + 1);
	printf("hoan vi vong quanh cua %d phan tu :%d\n", n, Q);
	C = tohop(n, k);
	printf("to hop chap %d cua %d phan tu : %d\n",k, n, C);
	getch();
	return 0;
}
