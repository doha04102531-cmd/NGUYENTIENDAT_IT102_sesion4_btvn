#include<stdio.h>
#include<math.h>
int main(){
	int n;
	
	printf("Nhap nam:");
	scanf("%d",&n);
	if((n%4==0 && n%100!=0)||(n%400==0)){
		printf("la nam nhuan\n");
	}else{
		printf("khong phai la nam nhuan\n");
	}
	return 0;
		 
}

