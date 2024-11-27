#include<stdio.h>
#include<math.h>
int main(){
	float a, b, c, delta, x, x1, x2;
	
	printf("vui long nhap 3 so a, b, c: ");
	scanf("%f %f %f", &a,&b, &c);
	if(a==0){
		if(b==0){
			if(c==0){
				printf("phuong trinh co vo so nghiem");
			}
			else{
				printf("phuong trinh vo nghiem");
			}
		}
		else{
			x = -c / b;
			printf("phuong trinh co nghiem: %.2f", x);		
		}
	}
	else{
		delta = b*b - 4*a*c;
		if(delta == 0){
			x1=x2= -b / 2*a;
			printf("phuong trinh co nghiem kep x1=x2=%.2f", x1);
		}
		else if(delta < 0){
			printf("phuong trinh vo nghiem");
		}
		else{
			x1= (-b -sqrt(delta)) / 2*a;
			x2= (-b + sqrt(delta)) / 2*a;
			printf("phuong trinh co hai nghiem phan biet: x1 = %.2f, x2 = %.2f",x1 ,x2);
		}
	}
	return 0;
	
}
