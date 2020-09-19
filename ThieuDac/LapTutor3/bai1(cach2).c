#include <stdio.h>
int main(){
	int n ;
	int check = 0;
	printf("nhap so nguyen n :\n");
	scanf("%d", &n);
	int i = 1 ;
	for(i; i < n/2; i++){
		if(n == i*i){
			check = 1;
		}
	}
	if(check == 1){
		printf("n la so chinh phuong !");
	}else{
		printf("n khong la so chinh phuong !");
	}
	getch();
	return 0 ;
}

