int main(){
	float x;
	float y = 3*x + 2;
	float a = -1;
	float b = 1;
	while (y != 0){
		x = (a + b)/2;
		y = 3*x + 2;
		if (y*(3*a+2)<0){
			b = (a+b)/2;
		}else{
			a = (a+b)/2;
		}
	}
	printf("nghiem la : %f",x );
	getch();
	return 0;
}
