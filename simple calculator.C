#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;
    float a,b;

    printf("Menu:\n");
    printf("1. add\n2. subtract\n3. multiply\n4. divide\n");
    printf("Enter your chooice(1-4):");
    scanf("%d", choice);

    printf("Enter two numbers:");
    scanf("%f %f, &a ,b");

    switch (choice){
    case 1:
        printf("result=%.2f",a+b);
        break;
    case 2:
        printf("result=%.2f",a-b);
        break;
    case 3:
        printf("result=%.2f",a*b);
        break;
    case 4:
        if(b != 0 )
            printf("result =%.2f",a/b);
        else
            printf("error: Divison by zero!");
        break;
    default:
        printf("invalid choice.");
    }

    return 0;
}



