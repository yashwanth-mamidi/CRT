#include <stdio.h>
#include <stdlib.h>

int main() {
    int ch, mn, balance = 1000;
    
    do {
        scanf("%d", &ch);  // Pass the address of ch to scanf
        switch(ch) {
            case 1:
                printf("%d\n", balance);
                break;
            case 2:
                scanf("%d", &mn);
                if(mn>0){
                balance=balance + mn;
                printf("%d\n", balance);
                }
                else{
                    printf("invalid amount\n");
                }
                break;
            case 3:
                scanf("%d", &mn);
                if(mn>0 && mn <= balance) {
                    balance=balance - mn;
                    printf("%d\n", balance - mn);
                } 
                else {
                    printf("You are poor, go and deposit some money\n");
                }
                break;
            case 4:
                printf("Thank you\n");
                exit(0);
        }
    } while(1); 
        
    return 0;
}
