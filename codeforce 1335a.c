// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,t,al,be,n;
    scanf("%d",&t);
    for(i=0;i<t;i++){
        scanf("%d",&n);
        if(n<=2){
            printf("0\n");
        }
        else{
            if(n%2==0){
                printf("%d\n",n/2-1);
            }
            else{
                printf("%d\n",n/2);
            }
        }
    }

    return 0;
}