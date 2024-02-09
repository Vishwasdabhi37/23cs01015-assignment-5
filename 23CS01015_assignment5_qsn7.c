// #include <stdio.h>
// int main()
// {
//     int m, n, p, q;
//     printf("Enter the order of first matrix(m,n) : ");
//     scanf("%d%d", &m, &n);
//     printf("Enter the order of second matrix(p,q) : ");
//     scanf("%d%d", &p, &q);
//     if (n != p)
//     {
//         printf("Matrix multiplication is not possible\n");
//         return 0;
//     }
//     int a[m][n], b[p][q], c[m][q];
//     printf("Enter matrix A : ");
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             scanf("%d", &a[i][j]);
//         }
//     }
//     printf("Enter matrix B : ");
//     for (int i = 0; i < p; i++)
//     {
//         for (int j = 0; j < q; j++)
//         {
//             scanf("%d", &b[i][j]);
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < q; j++)
//         {
//             int x = 0;
//             c[i][j] = 0;
//             while (x < n)
//             {
//                 c[i][j] += a[i][x] * b[x][j];
//                 x++;
//             }
//         }
//     }
//     for (int i = 0; i < m; i++)
//     {
//         for (int j = 0; j < q; j++)
//         {
//             printf("%d ", c[i][j]);
//         }
//         printf("\n");
//     }

//     return 0;
// }
#include <stdio.h>
#include <string.h>
void bubblesort(int *arr, int size)
{
    int issorted = 0;
    while (size != 1)
    {
        int val = 0;
        for (int i = 0; i < size - 1; i++)
        {
            issorted = 1;
            if (arr[i] > arr[i + 1])
            {
                int temp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = temp;
                issorted = 0;
            }
        }
        if (issorted)
        {
            return;
        }
        size--;
    }
}
int main()
{
    int arr[10];
    printf("Enter the elements of the array : ");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr) / (sizeof(typeof(*arr)));
    bubblesort(arr, size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
