#include<stdio.h>
int main(){
	for(int number = 1; number <=100; number++){
		printf("%d\n", number);
		if(number % 3 == 0 && number % 5 ==0){
			printf("%d FizzBuzz\n", number);
		}
		else if(number % 5 == 0){
			printf("%d Buzz\n", number);
		}
		else{
			printf("%d Fizz\n", number);
		}
	}
	return 0;
}
