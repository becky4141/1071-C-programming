#include<stdio.h>

int main(){

    int choice,height,width,type;
    int i,j;

    while(1){
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Exit\n");
        printf("=> ");
        scanf("%d",&choice);
        if(choice==3)break;
        switch(choice){
            case 1:
                printf("Enter height and width: ");
                scanf("%d %d",&height,&width);
                for(int i=1;i<=height;i++){
                    for(int j=1;j<=width;j++){
                        if(i==1||i==height||j==1||j==width)
                            printf("*");
                        else
                            printf(" ");
                    }
                printf("\n");
                }
                break;

            case 2:
                printf("Enter height and type: ");
                scanf("%d %d",&height,&type);
                if(type==1){
                    for(int i=1;i<=height;i++){
                        for(int j=1;j<=height;j++){
                            if(i==height||i==j||j==1)
                                printf("*");
                            else
                                printf(" ");
                    }
                    printf("\n");
                }
				break;

            }

            if(type==2){
                    for(int i=1;i<=height;i++){
                		for(int j=height;j>=1;j--){
                        	if(i==height||i==j||j==1)
                                printf("*");
                            else
                                printf(" ");
                    }
                    printf("\n");
                }
                break;

                }


            if(type==3){
                for(int i=1;i<=height;i++){
                    for(int j=height;j>=1;j--){
                        if(j==height||i==j||i==1)
                            printf("*");
                        else
                            printf(" ");
                }
                printf("\n");
            }
            break;

            }
            if(type==4){
                for(int i=1;i<=height;i++){
                    for(int j=1;j<=height;j++){
                        if(j==height||i==j||i==1)
                            printf("*");
                        else
                            printf(" ");
                }
                printf("\n");
            }
            break;

            }

        }
            continue;
        }


        }
