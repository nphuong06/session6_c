#include<stdio.h>
int main(){
	int number, i;
	printf("nhap mot so nguyen duong: ");
	scanf("%d", &number);
	for(i = 1; i <= number; i++){
		if(number % i== 0){
			printf("uoc cua %d la: %d\n", number, i);
		}
	}
	return 0;
}
