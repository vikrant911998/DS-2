#include<stdio.h>

int main(){
    int a[3][3],b[3][3],c[3][3];
    int i=0,j=0;

    printf("Enter the elements of First Matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }
    

    printf("Enter the elements of Second Matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&b[i][j]);
        }
    }


    printf("First Matrix  elements are \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    printf("Second Matrix  elements are \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",b[i][j]);
        }
        printf("\n");
    }


    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            c[i][j] = a[i][j]+b[i][j];
        }
    }

    printf("Third Matrix  elements are \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}