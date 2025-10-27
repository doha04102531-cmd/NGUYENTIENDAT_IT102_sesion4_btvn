#include<stdio.h>
#include<math.h>
int main(){
	int ngay,thang,nam;
	
	printf("Nhap ngay:");
	scanf("%d",&ngay);
	
	printf("Nhap thang:");
	scanf("%d",&thang);
	
	printf("Nhap nam:");
	scanf("%d",&nam);
	
	if(thang<1||thang>12){
		printf("ngay thang nam khong hop le"); 
	} 
	return 0;
	 
}
 
