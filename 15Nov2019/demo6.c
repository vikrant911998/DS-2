#include<stdio.h>

int main(){
    int a[3][3];
    int i=0,j=0;

    printf("Enter the elements of First Matrix\n");
    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            scanf("%d",&a[i][j]);
        }
    }

    printf("First Matrix  elements are \n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("%d  ",a[i][j]);
        }
        printf("\n");
    }
    

    printf("Primary Diagonal\n");

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if(i == j)
                printf("%d ",a[i][j]);
        }
    }

    printf("Secondary Diagonal\n");
    int row = 3;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            if((i+j) == row-1)
                printf("%d ",a[i][j]);
        }
    }

    
    return 0;
}