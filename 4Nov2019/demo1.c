#include<stdio.h>

int main(){
    char a[] = {'a','b','c','b','a'};
    // char* b = "abcba"; 
    int i=0,j=4;

    while(i<j){
        if(a[i]==a[j]){
            i++;j--;
        }
        else{
            printf("Not palindrome\n");
            break;
        }
    }
    if(i>=j){
        printf("Palindrome\n");
    }

    return 0;
}