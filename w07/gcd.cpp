#include<stdio.h>

int gcd(int a,int b){
    if(a==0){
        return b;
    }else{
        return gcd(b%a,a);
    }
}

/*int rgcd(int a,int b){
    while(a!=0){
        int c=b%a;
        b=a;
        a=c;
    }
    return b;
}*/


int rgcd(int a,int b){
    for(int i=2;i<a;i++){
        if(a%i==0 && b%i==0){
            int c=i;
        }else{

        }
    }
}


int main(){
    printf("rgcd(48,126)=%d\n",rgcd(48,126));
    printf("gcd(48,126)=%d\n\n",gcd(48,126));

    printf("rgcd(48,128)=%d\n",rgcd(48,128));
    printf("gcd(48,128)=%d\n\n",gcd(48,128));

    printf("rgcd(48,144)=%d\n",rgcd(48,144));
    printf("gcd(48,144)=%d\n\n",gcd(48,144));

    printf("rgcd(48,84)=%d\n",rgcd(48,84));
    printf("gcd(48,84)=%d\n\n",gcd(48,84));
}
/*
gcd(48,126) = 6
gcd(48,128) = 16
gcd(48,144) = 48
gcd(48,84) = 48

*/
