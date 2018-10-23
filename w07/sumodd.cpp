#include<stdio.h>

int sumodd1(int n){
    int total=0;
    for(int i=1;i<=n*2-1;i+=2){
        total+=i;
    }
    return total;
}

int sumodd2(int n){
    int total=0;
    for(int i=1;i<=n;i+=2){
        total+=i;
    }
    return total;
}


int main(){
    int n;
    printf("Enter n = ");
    scanf("%d",&n);
    while(1){
    printf("sumodd1(%d)=%d\n",n,sumodd1(n));
    printf("sumodd2(%d)=%d\n",n,sumodd2(n));
    printf("Enter n = ");
    scanf("%d",&n);
    }
}

//n is odd
// sumodd1(n) = 1+3+5+...(2n-1)
// sumodd2(n) = 1+3+5+...n
