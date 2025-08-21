#include <stdio.h>
#include <stdlib.h>

int area(int side){
   return side * side;
}
int main(){
       int side;

       printf("enter the side of the square:");
       scanf("%d",&side);

       printf("area of square = %d",area(side));

    return 0;
}
