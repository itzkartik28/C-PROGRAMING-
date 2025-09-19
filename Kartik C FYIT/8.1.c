#include <stdio.h>
#include <stdlib.h>


int main () {
    int max[10][10];
    int m, n,i, j;


     printf("enter number of row: ");
     scanf("%d",&m);

     printf("enter number of column:");
     scanf("%d", &n);

     printf("enter matrix  element:\n");
     for (i = 0; i < m ;i++){
        for (j = 0; j < n;j++){
            printf("element [%d] [%d]:",i,j);
            scanf("%d",&max [i][j]);

        }
     }

     printf("\nmatrix is:\n");
     for (i = 0; i < m;i++){
        for (j = 0; j < n; j++){
                printf("%d\t",max [i][j]);


        }
        printf("\n");

     }

     return 0;
     }
