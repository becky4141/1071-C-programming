/*#include<stdio.h>

void swapping(int *pa,int *pb){
    int temp;
    temp=*pa;
    *pa=*pb;
    *pb=temp;
    printf("swap: %d %d\n",*pa,*pb);
}


int main(){
    int a,b;
    printf("Enter a,b: ");
    scanf("%d %d",&a,&b);
    swapping(&a,&b);
    printf("main: %d %d\n",a,b);
}*/

#include<stdio.h>

void swapping(int pa,int pb){
    int temp;
    temp=pa;
    pa=pb;
    pb=temp;
    printf("swap: %d %d\n",pa,pb);
}


int main(){
    int a,b;
    printf("Enter a,b: ");
    scanf("%d %d",&a,&b);
    swapping(a,b);
    printf("main: %d %d\n",a,b);
}


