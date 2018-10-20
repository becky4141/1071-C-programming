#include<stdio.h>

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

int decode(int ans){
	int a,b,c,d,k,ans2;
	a=ans/1000;
	b=(ans-a*1000)/100;
	c=(ans-a*1000-b*100)/10;
	d=ans%10;
	c-=5;
	if(c<0)
		c=c+10;
	k=c;c=a;a=k;
	k=b;b=d;d=k;
	
	ans2=a*1000+b*100+c*10+d;
	return ans2;
	
}

int main(){
	int n;
	printf("Enter N (-1 to exit):");
	scanf("%d",&n);
	int ans=encode(n);
	printf("encode(%d)=%d\n",n,ans);
	int ans2=decode(ans);
	printf("decode(%d)=%d",ans,ans2);
	
}
