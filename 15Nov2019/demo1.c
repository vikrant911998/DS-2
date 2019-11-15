#include<stdio.h>
#include<string.h>


char * replaceCh(char *p,char c,int index){

    if(index == strlen(p))
        return p;

    if(p[index]== 'a')
        p[index] = c;

    return replaceCh(p,c,++index);
    
}



int main(){
    char *str = "aabacda";

    char *rev = replaceCh(str,'#',0);

    // printf("%s\n",rev);
    puts(rev);

    return 0;
}