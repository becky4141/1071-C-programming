#include<stdio.h>

int math(int x,int y){
	printf("%d + %d = %d\n",x,y,x+y);
	printf("%d - %d = %d\n",x,y,x-y);
	printf("%d * %d = %d\n",x,y,x*y);
	printf("%d / %d = %d\n",x,y,x/y);
	printf("%d %% %d = %d\n",x,y,x%y);
}

int BMI(int h1,int h2){
	float g1,g2;
	while(1){
		if(h1!=-1 && h2!=-1){
			for(int i=h1;i<=h2;i++){
				g1=18.5*(i*i/10000.);
				g2=24*(i*i/10000.);
				printf("%4d cm: %.1f ~ %.1f (kg)\n",i,g1,g2);
			}
		}else{
			printf("Bye! Coding by 407410082 \n");
			break;
		}
		break;
	}
}

void prchar(char c, int n){
    for(int i=1;i<=n;i++)
        printf("%c",c);
}

void drawVerTri(int height){
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
		break;
	}
}

int encode(int n){
	int a,b,c,d,k;
	a=n/1000;
	b=(n-a*1000)/100;
	c=(n-a*1000-b*100)/10;
	d=n%10;
	a+=5;
	if(a>=10)
		a=a-10;
	k=c;c=a;a=k;
	k=b;b=d;d=k;
	
	n=a*1000+b*100+c*10+d;
	return n;
}

int decode(int t){
	int a,b,c,d,k;
	a=t/1000;
	b=(t-a*1000)/100;
	c=(t-a*1000-b*100)/10;
	d=t%10;
	c-=5;
	if(c<0)
		c+=10;
	k=c;c=a;a=k;
	k=b;b=d;d=k;
	
	t=a*1000+b*100+c*10+d;
	return t;
}


int main(){
	int choice;
	int x,y;
	int h1,h2;
	int height;
	int n,ans;
	int t,ans2;
	
	while(1){
		printf("main menu: \n");
		printf("1. Arithmetic Computation\n");
		printf("2. List BMI ranges\n");
		printf("3. Draw Four Vertical Triangles\n");
		printf("4. encode\n");
		printf("5. decode\n");
		printf("6. Exit\n");
		printf("=>");
		scanf("%d",&choice);
		if(choice==6)break;
		
		switch(choice){
		
			case 1:
				printf("Enter two integers : ");
				scanf("%d %d",&x,&y);
				math (x,y);
				printf("\n");
				break;
				
			case 2:
				printf("Eneter height (-1 to exit) : ");
				scanf("%d %d",&h1,&h2);
				BMI(h1,h2);
				printf("\n");
				break;
				
			case 3:
				printf("Enter height(-1 to exit): ");
				scanf("%d",&height);
				drawVerTri(height);
				printf("\n");
				break;
				
			case 4:{ 
				printf("Enter N (-1 to exit):");
				scanf("%d",&n);
				int ans=encode(n);
				printf("encode(%d)=%d\n",n,ans);
				printf("\n");
				break;
			} 
				
			case 5:{ 
				printf("Enter N (-1 to exit):");
				scanf("%d",&t);
				int ans2=decode(t);
				printf("decode(%d)=%d\n",t,ans2);
				printf("\n");
				break;
			} 
		}
	}
}


/*(1) Arithmetic Computation 
(2) List BMI ranges 
(3) Draw Four Vertical Triangles 
(4) encode(n) 
(5) decode(n) 
(6) Exit */
 
