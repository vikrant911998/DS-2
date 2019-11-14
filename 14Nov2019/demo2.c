#include<stdio.h>

int countDigit(int num, int count){

    if(num == 0)
        return count;

    ++count;

    return countDigit(num/10,count);
}


int main(){
    int a = 3456745;
    int count = countDigit(a,0);
    printf("Count = %d\n",count);

    return 0;
}