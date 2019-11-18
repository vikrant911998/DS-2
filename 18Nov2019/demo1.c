#include<stdio.h>
#include<string.h>


int countLength(char *p,int index, int count){

    if(index == strlen(p))
        return count;

    ++count;

    return countLength(p,++index,count);
}

int main(){ 
    char *str = "abcdef34fsjdhfkh";

    printf("Count = %d\n",countLength(str,0,0));

    return 0;
}