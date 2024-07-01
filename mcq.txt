//#include <stdio.h>
//int main() {
//    int i;
//    for(i=0;i<10;i++){
//        if(i<5){
//            continue;
//        }
//        else{
//            break;
//        }
//        printf("bf");
//    }
//}


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a=500,b=200,c;
    if(!a>=100){
        b=300;
    }
    c=300;
    printf("%d %d",b,c);

    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a=500,b=200,c;
    if(!(a>=100)){
        b=300;
    }
    c=300;
    printf("%d %d",b,c);

    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a=5;
    float c=5.0;
    if(a==c){
        printf("yes");
    }
    else{
        printf("no");
    }
    
}

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char ch;
    if(ch==printf("")){
        printf("yes");
    }
    else{
        printf("no");
    }
    
}


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a=b=c=10;
    a=b=c=20;
    printf("%d %d %d",a,b,c);
    
}

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int x;
    x=printf("Try programiz.pro");
    printf("\nx=%d",x);

    return 0;
}


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int x=0;
    for(;x;){
        x++;
    }
    printf("%d",x);

    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i=50;
    printf("%c %d",i,i);

    return 0;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;
    for(x=5;x>=1;x--){
        for(y=1;y<=x;y++){
            printf("%");
        }
    }
    
return 0;
}


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    float a=0.5;
    if(a==0.5){
        printf("yes");
    }
    else{
        printf("no");
    }

    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    char c ='a';
    switch (c){
        case 97:
        printf("yes");
        break;
        
        case 'a':
        printf("no");
        break;
    }

    return 0;
}


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int a=1;
    printf("%d\n",sizeof(++a));
    printf("%d",a);

    return 0;
}

// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int c,a=10;
    c=printf("%d",a);
    printf("\n%d",c);

    return 0;
}


// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    
    //printf("%d",1^2^3^4^5);
    int i=6,l=3,r=6;
    if(i%4==1)printf("%d\n",1);
    if(i%4==2)printf("%d\n",i+1);
    if(i%4==3)printf("%d\n",0);
    if(i%4==0)printf("%d\n",i);
    printf("%d",i^(1^l-1));
}
