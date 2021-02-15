#include <stdio.h> 
#include "trans.h"
#define M 3 
#define N 4 

int main() 
{ 
	int m,n;
    printf("Enter number of rows : ");
    scanf("%d", &m);
    printf("Enter number of columns : ");
    scanf("%d", &n);

    int matrix[m][n], transp[n][m],i,j;

    printf("\n Enter the elements of matrix \n");
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("Enter data in [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
  
    transpose(m, n, matrix, transp); 
  
    printf("Result matrix is \n"); 
    for (i = 0; i < n; i++) 
    { 
        for (j = 0; j < m; j++) 
        printf("%d ", transp[i][j]); 
        printf("\n"); 
    } 
  
    return 0; 
} 