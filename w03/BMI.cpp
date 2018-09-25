#include <stdio.h>


int main(){
	
	float a,b,c;
	printf("你的身高(cm) : ");
	scanf("%f",&a);
	printf("你的體重(kg) : ");
	scanf("%f",&b);
	c = b/(a*a/10000.);
	printf("你的BMI = %.1f\n",c);
	while(c>=0){
			if(c<18.5) printf("你的體重過輕\n");
			else if(c>=18.5 && c<24) printf("你的體重屬於正常範圍\n");
			else if(c>=24 && c<27) printf("你的體重過重\n");
			else if(c>=27 && c<30) printf("你的屬於輕度肥胖\n");
			else if(c>=30 && c<35) printf("你的屬於中度肥胖\n");
			else printf ("你的屬於重度肥胖\n");
			
	printf("\n你的身高(cm) : ");
	scanf("%f",&a);
	printf("你的體重(kg) : ");
	scanf("%f",&b);
	c = b/(a*a/10000.);
	printf("你的BMI = %.1f\n",c);	
}
	
}
