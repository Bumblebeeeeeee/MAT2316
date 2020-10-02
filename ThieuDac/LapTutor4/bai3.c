#include<stdio.h>
#include <stdbool.h>

bool checksnt(int n){
	int i;
if (n < 2)
	return 0;
for (i = 2; i < n; ++i) {
	if (n % i == 0)
		return false;
}
return true;
}

void printsnt(int n){
	int i;
	printf("cac so nguyen to nho hon n : \n");
	for (i = 0 ; i < n ; i++){
		if (checksnt(i) == 1)
			printf("%d ",i);
	}
}

void tachsnt(int n){
	int i;
	for(i = 0 ; i <= n/2 ; i++){
		if(checksnt(i) && checksnt(n - i))
			printf("%d = %d +%d\n",n ,i , n-i);
	}	
}

int main(){
	int n;
	printf("nhap so nguyen duong n: ");
	scanf("%d", &n);
	if(checksnt(n) == 1){
		printf("n la so nguyen to ! \n");
	}else{
		printf("n khong la so nguyen to !\n");
	}
	printsnt(n);
	printf("\n");
	printf("tach so nguyen to :\n");
	tachsnt(n);
	getch();
	return 0;
}
