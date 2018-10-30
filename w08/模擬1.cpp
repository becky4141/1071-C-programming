#include<stdio.h>
#include<ctype.h>

int prime(int n){
    if(n==1) return 0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return 0;
        }
    }return 1;
}

int main(){
    int n;
    char cont='Y';

    while(1){
        if(cont=='Y'){
            printf("Enter N = ");
            scanf("%d",&n);
            if (prime(n)){
                printf("%d is a prime\n",n);
            }else{
                printf("%d is not a prime\n",n);
            }
            printf("Continue (Y/N)?");
            getchar();
            cont=toupper(getchar());
            printf("\n");
        }else{
            printf("Coding by 407410082\n");
            break;
        }
    }
}

