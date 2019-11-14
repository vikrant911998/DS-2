#include<stdio.h>

int power(int a, int b, int count,int result){

    if(count > b)
        return result;

    result = result * a;

    return power(a,b,++count,result);
}


int main(){
    int a,b;
    printf("Enter the base\n");
    scanf("%d",&a);

    printf("Enter the exponent\n");
    scanf("%d",&b);

    int result = power(a,b,1,1);

    printf("Result = %d\n",result);

    return 0;
}