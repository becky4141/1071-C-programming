#include<stdio.h>

void prchar(char c, int n){
    for(int i=1;i<=n;i++)
        printf("%c",c);
}

int main(){
	int height;
	printf("Enter height(-1 to exit): ");
	scanf("%d",&height);
	while(1){
	if(height>=0){
		for(int i=0;i<=height;i++){
			prchar(' ',height-i);
			prchar('*',i);
			prchar(' ',2);
			prchar('*',i);
			printf("\n");
		}
	}else{
		printf("Bye! Coding by 407410082 ");
		break;
	}
	printf("Enter height(-1 to exit): ");
	scanf("%d",&height);
	} 
}
