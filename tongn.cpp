#include <stdio.h>
// tinh tong cac so nguyen
 int main(){
  int n;
  do{
  	printf("nhap so nguyen n ");
  	scanf("%d",&n);
  	if(n<=0){
  	 printf("vui long nhap lai n :");
	  }
  }while(n<=0);
  	int sum =0;
  for(int i=1;i<=n;i++){
  	sum = sum +i;
  }
  printf("tong cac so nguyen la : %d",sum);
  
  
 
 
 
 
 
 }
