#include <stdio.h>
#include <conio.h>
#include <math.h>

	int main(){
		//khai bao cac bien
		float x,y;
		float s;
		//nhap cac gia tri chieu dai, chieu rong
		printf("nhap chieu dai : ");
		scanf("%f", &x);
		printf("nhap chieu rong : ");
		scanf("%f", &y);
		//tinh dien tich va in ra gia tri tinh duoc 
		s = x*y;
		printf("dien tich hinh chu nhat la : %f", s);
		getch();
		return 0;
	} 
