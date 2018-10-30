#include<stdio.h>
#include<ctype.h>

int checkSqrt(int n){
    for(int m=1;m>=n/2;m++){
        if(n==m*m){
            return m;
        }
    }return 0;
}

int main(){
    int n,m;
    char cont='Y';

    while(1){
        if(cont=='Y'){

        printf("Enter N :");
        scanf("%d",&n);
        if(checkSqrt(n)){
            printf("YES. %d=%d*%d",n,m,m);
        }else{
            printf("NO.\n");
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
