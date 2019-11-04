#include<stdio.h>


int palindrome(char *p,int start,int end){
    if(start == end){
        return 1;
    }
    if(start>end)
        return 1;

    if(p[start] != p[end])
        return 0;

    return palindrome(p,start+1,end-1);
}

int main(){
    char *p="abcbas";
    if(palindrome(p,0,5)){
        printf("Palindrome\n");
    }
    else{
        printf("Not Palindrome\n");
    }
    return 0;
}