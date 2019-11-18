#include<stdio.h>

int main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int i=0,j,n=0;
    printf("Enter the size of the pair\n");
    scanf("%d",&n);

    while(i<10){
        for(j=i;j<i+n;j++){
            if(i>=10){
                break;
            }
            printf("%d ",a[j]);
        }
        printf("\n");
        i = i+n;
    }


    return 0;
}