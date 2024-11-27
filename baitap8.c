#include<stdio.h>
int main(){
	float tien, tienLai, tienNhanDuoc, tienBanDau;
	int n, month;
	printf("nhap so tien ban muon gui: ");
	scanf("%f", &tien);
	tienBanDau = tien;
	printf("ban muon gui bao nhieu thang: ");
	scanf("%d", &month);
	for(n =1; n <= month; n++){
		tien = tien + tien * 0.01; 
	}
	tienNhanDuoc = tien;
	tienLai = tienNhanDuoc - tienBanDau;
	printf("tien lai la: %.3f\n", tienLai);
	printf("tien nhan duoc la: %.3f\n", tienNhanDuoc);
	return 0;
}
