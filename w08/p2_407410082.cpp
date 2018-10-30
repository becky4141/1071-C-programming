#include<stdio.h>
#include<ctype.h>
#define MAX 100

int prime(int n){
    if(n==1) return 0;
    for(int i=2;i<=n-1;i++){
        if(n%i==0){
            return 0;
        }
    }return 1;
}

int findPrime(int data[],int N1,int N2){
    int num=0;
    for(int n=N1;n<=N2;n++){
        if(prime(n)){
            data[num]=n;
            num=num+1;
        }
    }
    return num;
}

int main(){
    int data[MAX];
    int N1,N2;
    int numPrime=0;
    char cont='Y';

    while(1){
        if(cont=='Y'){
            printf("Enter n1 and n2 : ");
            scanf("%d %d",&N1,&N2);
            numPrime = findPrime(data,N1,N2);
            printf("%d primes between %d and %d\n",numPrime,N1,N2);
            for(int n=0;n<numPrime;n++){
                printf("%d ",data[n]);

            };printf("\n");

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
