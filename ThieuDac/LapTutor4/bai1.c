
// tim UCLN cua 2 so
int timUCLN(int a, int b) {
int r;
int temp;
if (a < b) {
	temp = a;
	a = b;
	b = temp;
	}
r = a % b;
while (r != 0){
	a = b;
	b = r;
	r = a % b;
	}	
return b;
printf("%d", b);
}

int main(){
	int a, b, c, ucln;
	printf("nhap 3 so a, b, c\n");
	printf("nhap a :");
	scanf("%d", &a);
	printf("nhap b :");
	scanf("%d", &b);
	printf("nhap c :");
	scanf("%d", &c);
	ucln = timUCLN(a, b); // UCLN cua a va b
	ucln = timUCLN(ucln, c); // UCLN cua a, b, c
	printf("UCLN cua a, b, c : %d", ucln);
}
