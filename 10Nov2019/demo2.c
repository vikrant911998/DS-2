#include<stdio.h>

int main(){
    int a[7]={1,2,3,4,5,6,7};//1,2,6,5,4,3,7
    int i=2,j=5;

    while(i<j){
        int temp = a[i];
        a[i] = a[j];
        a[j] = temp;
        i++;
        j--;
    }
    
    for(i=0;i<7;i++){
        printf("%d ",a[i]);
    }

    return 0;
}