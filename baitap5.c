#include<stdio.h>
int main(){
	int month, year;
	printf("hay nhap thang nam: ");
	scanf("%d %d", &month, &year);
	switch(month){
		case 1: case 3: case 5: case 7: case 8: case 10: case 12:
			printf("thang nay co 31 ngay");
			break;
		case 4: case 6: case 9: case 11:
			printf("thang nay co 30 ngay");
			break;
		case 2:
			if(year % 400 == 0 || year % 4 ==0 && year % 100 != 0){
				printf("thang nay co 29 ngay");
			}
			else{
				printf("thang nay co 28 ngay");
			}
			break;
		default:
			printf("thang nhap khong hop le !");
			break;
	}
	return 0;
}
