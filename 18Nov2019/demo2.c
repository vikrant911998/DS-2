#include<stdio.h>
int sum(int num,int s){
    if(num == 0)
        return s;
    
    // s = s+num%10;
    s +=num%10;

    return sum(num/10,s);

}



int main(){
    int num = 12345;

    printf("SUM = %d\n",sum(num,0));

    return 0;
}


1,2,3,4,5,6,7,8,9,10
3
123 ->
456
789
10
