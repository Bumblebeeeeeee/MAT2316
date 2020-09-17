#include<iostream>
#include<math.h>
#include<stdio.h>
using namespace std;
bool check(int n){
for(int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
        	return false;
			}
	}
	return true;
}
//void minnumber(int n){
//	int i = 2;
//	int index;
//	for (i; i<n; i++){
//		if(check(i)){
//			index = i;	
//		}
//	}
//	cout << index <<endl;
//}
//void printsnt(int x){
//	int count = 0 ;
//	for(int i = 2 ; i <INT_MAX; i++){
//		if (count == x ){
//			break ;
//		}else{
//			if (check(i) == 1){
//			cout << i << endl;
//			count ++ ;
//		}
//		}
//
//	}
//}
int main(){
		int n;
		freopen("A.in","r",stdin);
		//cout <<"nhap n :\n";
		cin >> n;
		
//   minnumber(n);

		if (check(n)){
			cout << "day la so nguyen to \n";
		}
		else{
			cout << "day khong la so nguyen to \n";
//			cout << "so nguyen to gan n nhat la :\n" << min << endl;
		}
//		cout << "tach so n thanh tong 2 so nguyen to :\n ";
//		
//		int x;
//		cout << "nhap so nguyen to dau tien ban muon in ra :\n ";
//		cin >> x;
//		printsnt(x);
		return 0;
	}
