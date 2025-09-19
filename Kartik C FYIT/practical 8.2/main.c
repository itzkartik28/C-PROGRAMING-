#include <stdio.h>
#include <stdlib.h>

void multiplymatrix(int a [10][10],int b [10][10],int c [10][10], int m, int n, int p)
{
    int i , j ,k;

    for (i = 0; i< m; i++){
        for (j = 0; j < p; j++){
            c [i] [j] = 0;
            for (k = 0; k < n; k++){
                c [i] [j] += a[i] [k] * b[k][j];
            }
        }
    }
}
int main() {
       int a[10][10],b[10] [10],c[10] [10];
       int m, n,p, i, j;

       printf("enter rows and column of matrix a (m x n):");
       scanf("%d %d",&m , &n);

       printf("enter rows and column of  matrix b (n x p):");
       scanf("%d %d", &n, &p);

       printf("enter element of matrix a:\n");
       for (i = 0; i < m;i++)
        for (j = 0; j < n;j++)
        scanf("%d",&a [i] [j]);

              printf("enter element of matrix b:\n");
       for (i = 0; i < n;i++)
        for (j = 0; j < p;j++)
        scanf("%d",&b [i] [j]);

        multiplymatrix(a ,b ,c ,m ,n ,p);

        printf("\nresultant matrix (a x b):\n");
          for(i = 0;j < m; i++)
        {

          for(i = 0;j < p; j++)

        printf("%d\t",c[i][j]);
        printf("\n");

}
return 0;
}






