// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int mark,grade;
    scanf("%d",&mark);
    grade=mark/10;
    switch(grade){
        case 10:
        printf("A");
        break;
        case 9:
        printf("A");
        break;
        case 8:
        printf("B");
        break;
        case 7:
        printf("C");
        break;
        case 6:
        printf("D");
        break;
        default:
        printf("F");
    }

    return 0;
}