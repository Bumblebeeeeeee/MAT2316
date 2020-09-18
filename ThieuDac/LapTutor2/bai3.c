
 	#include <math.h>

	 int main (){
	 	//khai bao cac bien 
	 	float xa, ya, xb, yb, xc, yc, ab, bc, ca, p, s;
	 	//nhap vao toa do cua cac diem 
 			printf("nhap toa do diem A :\n");
 			printf("Xa = ");
 			scanf("%f", &xa);
 			printf("Ya = ");
 			scanf("%f", &ya);
 			printf("nhap toa do diem B :\n");
 			printf("Xb = ");
 			scanf("%f", &xb);
 			printf("Yb = ");
 			scanf("%f", &yb);
 			printf("nhap toa do diem C :\n");
 			printf("Xc = ");
 			scanf("%f", &xc);
 			printf("Yc = ");
 			scanf("%f", &yc);
 			// tinh do dai cac canh cua tam giac
 			ab = sqrt((xa - xb)*(xa-xb) + (ya-yb)*(ya-yb));
 			bc = sqrt((xb - xc)*(xb-xc) + (yb-yc)*(yb-yc));
 			ca = sqrt((xc - xa)*(xc-xa) + (yc-ya)*(yc-ya));
 			//kiem tra xem 3 diem da nhap co phai la 3 dinh cua mot tam giac khong 
 			// neu la 3 dinh cua mot tam giac thi tinh dien tich 
 			// neu khong thi hien thong bao 
 			if (ab + bc > ca && bc + ca > ab && ca + ab > bc){
 				p = (ab + bc + ca)/2;
 				s = sqrt(p*(p-ab)*(p-bc)*(p-ca));
 				printf("dien tich cua tam giac la : %f", s);
			 }else{
			 	printf("day khong phai la 3 dinh cua mot tam giac !");
			 }
			 getch();
			 return 0 ;
		}
