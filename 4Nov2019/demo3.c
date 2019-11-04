#include<stdio.h>
#include<string.h>

void checkAnagram(char *p1,char *p2){
    int len1 = strlen(p1);
    int len2 = strlen(p2);
// 1001340;
    if(len1 == len2){
        int a1[255];
        int a2[255];
        for(int i=0;i<255;i++){
            a1[i]=0;
            a2[i]=0;
        }

        for(int i;i<255;i++){
            ++a1[p1[i]];
            ++a2[p2[i]];
        }

        for(int i=0;i<255;i++){
            if(a1[i] != a2[i]){
                printf("Not Anagram\n");
                return;
            }
        }
        printf("Anagram\n");
    }
    else{
        printf("Not Anagram\n");
        return;
    }
}


int main(){
    char *p1 = "silent";
    char *p2 = "listen";
    checkAnagram(p1,p2);

    return 0;
}