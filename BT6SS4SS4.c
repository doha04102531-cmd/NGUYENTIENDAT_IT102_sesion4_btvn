#include<stdio.h>
#include<math.h>
int main(){
	int chisoMoi,chisoCu,soDien;
	long tienDien;
	
	printf("Nhap chi so dien moi:");
	scanf("%d",&chisoMoi);
	
	printf("Nhap chi so dien cu:");
	scanf("%d",&chisoCu);
	
	soDien = chisoMoi - chisoCu; 
	printf("So dien ban da su dung la: %dKwh\n",soDien);
	
	if(soDien < 50){
		
   		tienDien = soDien * 10000;
	}else if (soDien < 100){
	
    	tienDien = 50 * 10000 + (soDien - 50) * 15000;
    }else if (soDien < 150){
	
    	tienDien = 50 * 10000 + 50 * 15000 + (soDien - 100) * 20000;
    }else if (soDien < 200){
	
    	tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + (soDien - 150) * 25000;
    }else{
	
    	tienDien = 50 * 10000 + 50 * 15000 + 50 * 20000 + 50 * 25000 + (soDien - 200) * 30000;
    }
	printf("so tien phai tra la: %ldVND", tienDien);
}



