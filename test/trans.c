void transpose(int m, int n, int matrix[][n], int transp[][m]) 
{ 
    int i, j; 
    for (i = 0; i < n; i++) 
        for (j = 0; j < m; j++) 
            transp[i][j] = matrix[j][i]; 
} 