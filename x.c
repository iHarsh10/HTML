#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    int len, flag;

    scanf("%s", &str);
    len = strlen(str);

    for(int i=0; i<len; i++){
        if(str[i] != str[len-i-1]){
            flag=1;
            break;
        }
    }

    if(flag){
        printf("Yes");
    }else{
        printf("No");
    }

    return 0;
}