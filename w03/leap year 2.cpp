#include <stdio.h>
#include <math.h>

int main(){
	
	int year;
	printf("Enter Year :  ");
	scanf("%d",&year);
	while(year>=0){
		if((year%4==0 && year%100!=0) || year%400==0)
			printf("Year %d is leap year.\n",year);
		else
			printf("Year %d is not leap year.\n",year);
		printf("Enter Year :  ");
		scanf("%d",&year);
	}
	
} 
