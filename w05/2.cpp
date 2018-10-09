#include<stdio.h>

int main(){
	int h1,h2;
	float g1,g2;
	printf("Eneter height (-1 to exit) : ");
	scanf("%d %d",&h1,&h2);
	while(1){
		if(h1>=0&&h2>=0){
			for(int i=h1;i<=h2;i++){
				g1=18.5*(i*i/10000.);
				g2=24*(i*i/10000.);
				printf("%4d cm: %.1f ~ %.1f (kg)\n",i,g1,g2);
			}
		}
		else{
			printf("Bye! Coding by 407410082 ");
			break;
		}
	printf("Eneter height (-1 to exit) : ");
	scanf("%d %d",&h1,&h2);
	
	}

}

/*Enter height(-1 to exit): 170175
170 cm: 53.9 ~ 69.0 (kg)
171 cm: 54.0 ~ 70.0 (kg)
172 cm: 54.5 ~ 71.0 (kg)
173 cm: 55.0 ~ 72.0 (kg)
174 cm: 56.0 ~ 72.5 (kg)
175 cm: 56.5~73.5(kg)

Enter height(-1 to exit): -1 -1
Bye! Coding by your_ID*/
