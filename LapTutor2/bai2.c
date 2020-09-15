#include <stdio.h>
#include <conio.h>
	int main(){
		float x,y;
		float s;
		printf("nhap chieu dai : ");
		scanf("%f", &x);
		printf("nhap chieu rong : ");
		scanf("%f", &y);
		s = x*y;
		printf("dien tich hinh chu nhat la : %f", s);
		getch();
		return 0;
	}
