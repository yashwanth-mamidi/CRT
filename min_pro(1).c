// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>
int main() {
    // Write C code here
    int v,u,i=0,c=0;
    char enuser[20],enpass[20];
    do{
    printf("enter your username:");
    scanf("%s",&enuser);
    printf("enter your password:");
    scanf("%s",&enpass);
    u=strcmp(enuser,"yashwanth");
    v=strcmp(enuser,"yashwanth0990");
    if(u!=0 && v!=0){
        if(c==3){
            printf("you are blocked");
        }
        else{
            printf("try again\n");
        }
        i++;
        c++;
    }
    else{
        printf("you are successfully logged into your account");
        break;
    }
    }while(i<=3);
        
    

    return 0;
}