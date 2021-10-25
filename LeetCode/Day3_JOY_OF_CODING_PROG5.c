#include <stdio.h>
int main()
{
    printf("Enter the row and coloumn of the matrix\n");
    int row, col;
    scanf("%d %d", &row, &col);
    printf("Enter the elements of the matrix\n");
    int arr[row][col];
    int transpose[col][row];
    int i = 0, j = 0;
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            transpose[i][j] = arr[j][i];
        }
    }
    printf("transpose of the matrix is \n");
    for (i = 0; i < col; i++)
    {
        for (j = 0; j < row; j++)
        {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }
}