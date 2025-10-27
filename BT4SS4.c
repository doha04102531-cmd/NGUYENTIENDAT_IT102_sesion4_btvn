#include<stdio.h>
int main(){
	int a;
	 printf("Nhap thang:");
	 scanf("%d",&a);
	 if(a<1||a>12){
	 	printf("Thang khong hop le"); 
	 } else if(a==2){
	 	printf("Thang nay co 28 hoac 29 ngay"); 
     } else if(a==4||a==6||a==9||a==11){
	 	printf("Thang nay co 30 ngay"); 
     } else{
     	printf("Thang nay co 31 ngay "); 
	 }
}
