#include<stdio.h>
int main(){
 int x,y;

 printf("Enter the value of X: ");
 scanf("%d",&x);
 printf("Enter the value of Y: ");
 scanf("%d",&y);

 if(x>0 && y>0){
    printf("Quadrant1: ");
 }
 else if(x<0 && y>0){
    printf("Quadrant2: ");
 }
 else if(x<0 && y<0){
    printf("Quadrant3:");
 }
 else if(x>0 && y<0){
    printf("Quadrant4: ");
 }
else if(x==0 && y==0){
    printf("Origin: ");
}
else{
    printf("invalid");
}
}
