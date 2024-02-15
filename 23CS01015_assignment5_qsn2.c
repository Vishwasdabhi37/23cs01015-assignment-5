// #include <stdio.h>
// int main()
// {
//     int m, n;
//     printf("Enter the order of matrix(m,n)\n");
//     scanf("%d %d", &m, &n);
//     int mat[m][n];
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("Enter the element %d %d : ", i + 1, j + 1);
//             scanf("%d", &mat[i][j]);
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             printf("%d\t", mat[j][i]);
//         }
//         printf("\n");
//     }

//     return 0;
// }

// Implimenting the same program using pointers
//  #include <stdio.h>
//  #include <stdlib.h>
//  int main()
//  {
//      int rows, cols;
//      printf("Enter the order of matrix(rows,cols)\n");
//      scanf("%d", &rows);
//      scanf("%d", &cols);
//      int *ptr = (int *)malloc(rows * cols * sizeof(int));
//      printf("Enter the matrix\n");
//      for (int i = 0; i < rows; i++)
//      {
//          for (int j = 0; j < cols; j++)
//          {
//              scanf("%d", &*(ptr + (i * cols) + j));
//          }
//      }
//      printf("Printing the transpose matrix\n");
//      for (int i = 0; i < rows; i++)
//      {
//          for (int j = 0; j < cols; j++)
//          {
//              printf("%d ", *(ptr + (j * cols) + i));
//          }
//          printf("\n");
//      }
//      free(ptr);
//      return 0;
//  }
#include <stdio.h>
#include <stdlib.h>
int main()
{
    int divident, divisor;
    printf("Enter divident and divsior\n");
    scanf("%d", &divident);
    scanf("%d", &divisor);
    int check = divident * divisor;
    int quotient = 0, remainder = 0;
    int temp = abs(divident);
    while (temp > abs(divisor))
    {
        temp -= abs(divisor);
        quotient++;
    }
    remainder = temp;
    if (check > 0)
    {
        printf("Quotient = %d\n", quotient);
        printf("Remainder = %d\n", remainder);
    }
    else if (divisor < 0)
    {
        quotient -= (2 * quotient);
        printf("Quotient = %d\n", quotient);
        printf("Remainder = %d\n", remainder);
    }
    else if (divident < 0)
    {
        quotient -= (2 * quotient);
        remainder -= (2 * remainder);
        printf("Quotient = %d\n", quotient);
        printf("Remainder = %d\n", remainder);
    }

    return 0;
}
