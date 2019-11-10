#include<stdio.h>

int main(){
    int a[5]={1,2,3,4,5};
    int num=0;
    printf("Enter the number of elements to be shifted\n");
    scanf("%d",&num);

    int i=0;
    while(i<num){
        int temp = a[4];
        int j=0;
        for(j=4;j>0;j--){
            a[j] = a[j-1];
        }
        a[0] = temp;
        i++;
    }
    printf("Elements are shifting\n");

    for(i=0;i<5;i++){
        printf("%d ",a[i]);
    }

    return 0;
}