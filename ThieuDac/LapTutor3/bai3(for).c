#include <stdio.h>
int main(){
	int n;
	printf("nhap n : ");
	scanf("%d", &n);
	float s = 0;
	int i = 1;
	// vong lap for tinh tong s
	for(i ; i <= n; i++){
		s = s + 1.0/i;
	}
	printf("ket qua : %f", s);
	getch();
	return 0;
}
