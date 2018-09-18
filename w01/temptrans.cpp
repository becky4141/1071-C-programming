#include <stdio.h>

int main(){
	
	float a,b;
	printf("Enter the temperature in C : ");
	scanf("%f",&a);
	b=a*9/5+32;
	printf("%.1f C = %.1f F\n",a,b);
	
	float x,y;
	printf("Enter the temperature in F : ");
	scanf("%f",&x);
	y=(x-32)*5/9;
	printf("%.1f F = %.1f C\n",x,y);
	
}

/*Enter the temperature in C : 45.5
  45.5 C = 113.9 F
  
  Enter the temperature in C : 60.7
  60.7 F = 15.9 C                */
  
