#include<stdio.h>

int countZero(int num,int c){
    if(num == 0){
        return c;
    }

    if(num %10 ==0)
        ++c;

    return countZero(num/10,c);
}

int main(){
    int n = 1009030;
    int count = countZero(n,0);
    printf("Count : %d\n",count);
    return 0;
}