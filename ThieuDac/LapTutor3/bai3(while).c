#include <stdio.h>
int main(){
	int n;
	printf("nhap n : ");
	scanf("%d", &n);
	float s = 0;
	int i = 1;
	// vong lap while tinh tong s
	while(i <= n){
		s = s + 1.0/i;
		i++;
	}
	printf("ket qua : %f", s);
	getch();
	return 0;
}
