#include <stdio.h>
#include <math.h>

main(){
	
	int year;
	printf("Enter Year :  ");
	scanf("%d",&year);
	if((year%4==0 && year%100!=0) || year%400==0){
		printf("Year %d is leap year.",year);
	}
	else{
		printf("Year %d is not leap year.",year);
	}
} 
