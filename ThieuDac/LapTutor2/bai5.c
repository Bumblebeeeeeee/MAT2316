#include <math.h>
#include <stdio.h>
int main(){
	//khai bao hang so e
	const float e = 2.71828;
	//nhap vao a va x 
	float a, x, kq;
	printf("nhap so thuc a : \n");
	scanf("%f", &a);
	printf("nhap so thuc x : \n");
	scanf("%f", &x);
	// neu a lon hon 0 thi ap dung cong thuc tinh
	if(a > 0){
	kq = exp(x*log(a));
	printf("kq : %f", kq);
	}else{	
	// neu a nho hon 0 thi xet gia tri cua x 
		if(x -(int)x == 0){
			int y = x ; // gan gia tri cua x thanh kieu int de xet xem x co chia het cho 2 khong 
			a = abs(a);
			if(y %2 == 0){
				kq = exp(y*log(a));
				printf("kq : %f", kq);
			}else{
				
				kq = -exp(y	*log(a));
				printf("kq : %f", kq);
			}
		
		}else{
			printf("khong tinh duoc !!!");
		}
	}
	getch();
	return 0;
}
