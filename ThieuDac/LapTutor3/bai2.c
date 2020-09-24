
int main(){
	int year, month;
	
	//nhap vao nam va thang
	printf("nhap nam : ");	
	scanf("%d", &year);
	printf("nhap thang : ");
	scanf("%d", &month);
	
	// kiem tra cac truong hop thang co 31 ngay
	if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 ){
		printf("so ngay trong thang : 31");
		
	// kiem tra cac truong hop thang co 30 ngay
	}else if (month == 4 || month == 6 || month == 9 || month == 11){
		printf("so ngay trong thang : 30");
		
	// kiem tra thang 2 
	}else{
		
		// kiem tra xem co phai nam nhuan hay khong
		if((year % 100 != 0 && year%4 == 0) || year % 400 == 0){ 			
			printf("so ngay trong thang : 29");
		}else{
			printf("so ngay trong thang : 28");
		}
	}
	getch();
	return 0;
}
