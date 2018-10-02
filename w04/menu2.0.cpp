#include<stdio.h>

void prchar(char c, int n){
    for(int i=1;i<=n;i++)
        printf("%c",c);
}


void drawRect(int height, int width, int filled){
    if(filled){
        for(int i=1;i<=height;i++){
            for(int j=1;j<=width;j++){
                printf("*");

            }
        printf("*");
        printf("\n");
        }
    }else{
        for(int i=1;i<=height;i++){
            for(int j=1;j<=width;j++){
                if(i==1||i==height||j==1||j==width)
                    printf("*");
                else
                    printf(" ");
            }
        printf("\n");
        }

    }
}

void drawVerTri(int height, int type,int filled){
    if(type==1){
       if(filled){
        for(int i=1;i<=height;i++){
            prchar('*',i);
            printf("\n");
        }
       }else{
        for(int i=1;i<=height;i++){
            if(i==1||i==height){
                prchar('*',i);
            }else{
            printf("*");
            prchar(' ',i-2);
            printf("*");
            }
            printf("\n");
        }
       }
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
    }

}

void drawTsoTri(int height, int type,int filled){
    if(filled){
        for(i=1;i<=height;i++){
            prchar('*',i);
            printf("\n")

            }
        }
    }else{

    }


}





int main(){

    int choice,height,width,type,filled;
    int i,j;

    while(1){
        printf("Main Menu\n");
        printf("1. Rectangle\n");
        printf("2. Vertical Triangle\n");
        printf("3. Tsosceles Triangle")
        printf("4. Exit\n");
        printf("=> ");
        scanf("%d",&choice);
        if(choice==4)break;
        switch(choice){
            case 1:
                printf("Enter height, width and filled: ");
                scanf("%d %d %d",&height,&width,&filled);
                drawRect(height,width,filled);
                break;

            case 2:
                printf("Enter height, type and filled: ");
                scanf("%d %d %d",&height,&type,&filled);
                drawVerTri(height,type,filled);
                break;
            case 3:
                printf("Enter height, type and filled: ");
                scanf("%d %d %d",&height,&type,&filled);
                drawTsoTri(height,type,filled);
                break;

        }
            continue;
        }


        }
