#include <stdio.h>
#include <stdlib.h>

int main(){
   int num, i = 1;
   unsigned long long fact = 1;

printf("enter a number:");
scanf("%d",&num);

if (num<0)
       printf("factorial is not defined for negative numbers.");
else{
              while (i<=num){
                            fact *=i;
                            i++;
              }
              printf("factorial of %d = %llu",num,fact);
}

    return 0;
}
