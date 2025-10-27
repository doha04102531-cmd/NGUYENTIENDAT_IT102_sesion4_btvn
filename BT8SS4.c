#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	
	printf("Nhap canh a:");
	scanf("%d",&a);
	
	printf("NHap canh b:");
	scanf("%d",&b);
	
	printf("Nhap canh c:");
	scanf("%d",&c);
	
	if(a+b>c&&b+c>a&&a+c>b){
		printf("La 3 canh cua tam giac\n");
	} else{
		printf("Khong phai 3 canh cua tam giac\n");
	}
	return 0; 
}

