#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	
	printf("Nhap so thu nhat:");
	scanf("%d",&a);
	
	printf("Nhap so thu hai:");
	scanf("%d",&b);
	
	printf("Nhap so thu ba:");
	scanf("%d",&c);
	
	if(c>a&&c<b||a>c&&b>c){
		printf("So thu ba nam trong khoang giua so thu 1 va so thu 2"); 
	} else{
		printf("So thu ba khong nam trong khoang giua so thu 1 va so thu 2");
	} 
	return 0; 
}

