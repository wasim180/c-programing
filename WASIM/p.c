#include<stdio.h>
int main(){
    int a,b,size=15;
    for(a=size/2;a<=size;a+=2){
        for(b=1;b<size-a;b+=2)printf(" ");
        for(b=1;b<=a;b++) printf("A");
        for(b=1;b<=size-a;b++)printf("");
        for(b=1;b<=a;b++)  printf("A");
        printf("\n");
    }
    for(a=size;a>=0;a--){
        for(b=a; b<=size;b++)printf("");
        for(b=1;b<=(a*2)-1;b++) printf("B");
        printf("\n");
    }
 for(a=size/2;a<=size;a+=2){
        for(b=1;b<size-a;b+=2)printf(" ");
        for(b=1;b<=a;b++) printf("A");
        for(b=1;b<=size-a;b++)printf("");
        for(b=1;b<=a;b++)  printf("A");
        printf("\n");
    }
    for(a=size;a>=0;a--){
        for(b=a; b<=size;b++)printf("");
        for(b=1;b<=(a*2)-1;b++) printf("B");
        printf("\n");
    }


}
