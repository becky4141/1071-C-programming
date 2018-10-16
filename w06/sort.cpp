#include<stdio.h>

int sorting(int d[], int n){
    int temp;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(d[j]>d[j+1]){
                temp=d[j];
                d[j]=d[j+1];
                d[j+1]=temp;
            }
        }
    }
}

void prArray(int d[], int n){
    for(int i=0;i<n;i++){
        printf("%3d",d[i]);
    }
    printf("\n");
}

int main(){
    int d[10]={10,50,41,11,66,73,98,46,12,27};
    int n=10;

    printf("original: ");
    prArray(d,n);
    sorting(d,n);
    printf("sorting : ");
    prArray(d,n);

}
