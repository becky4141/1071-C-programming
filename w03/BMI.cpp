#include <stdio.h>


int main(){
	
	float a,b,c;
	printf("�A������(cm) : ");
	scanf("%f",&a);
	printf("�A���魫(kg) : ");
	scanf("%f",&b);
	c = b/(a*a/10000.);
	printf("�A��BMI = %.1f\n",c);
	while(c>=0){
			if(c<18.5) printf("�A���魫�L��\n");
			else if(c>=18.5 && c<24) printf("�A���魫�ݩ󥿱`�d��\n");
			else if(c>=24 && c<27) printf("�A���魫�L��\n");
			else if(c>=27 && c<30) printf("�A���ݩ󻴫תέD\n");
			else if(c>=30 && c<35) printf("�A���ݩ󤤫תέD\n");
			else printf ("�A���ݩ󭫫תέD\n");
			
	printf("\n�A������(cm) : ");
	scanf("%f",&a);
	printf("�A���魫(kg) : ");
	scanf("%f",&b);
	c = b/(a*a/10000.);
	printf("�A��BMI = %.1f\n",c);	
}
	
}
