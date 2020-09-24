#include <stdio.h>
#include <conio.h>
#include <math.h>
	int main(){
		
		//khai bao cac bien
		float xa, ya;
		float xb, yb;
		float distance;
		
		// nhap gia tri cac diem 
		printf("nhap toa do diem A:\n");
		printf("nhap Xa :");
		scanf("%f", &xa);
		printf("nhap Ya :");
		scanf("%f", &ya);
		printf("nhap toa do diem B:\n");
		printf("nhap Xb :");
		scanf("%f", &xb);
		printf("nhap toa do diem B:\n");
		printf("nhap Yb :");
		scanf("%f", &yb);
		
		//tinh khoang cach giua hai diem va in ra 
		distance = sqrt((xb-xa)*(xb-xa) + (yb-ya)*(yb-ya));
		printf("khoang cach giua hai diem la : %f", distance);
		getch();
		return 0;
	}
