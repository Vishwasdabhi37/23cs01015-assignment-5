// #include <stdio.h>
// int main()
// {
//     int num;
//     printf("Enter the number : ");
//     scanf("%d", &num);
//     int digits[4], i = 0, temp = num;
//     while (temp)
//     {
//         digits[i] = temp % 10;
//         temp /= 10;
//         i++;
//     }
//     int v = 1;
//     for (int j = 0; j < 4; j++)
//     {
//         for (int k = 0; k < 4; k++)
//         {
//             for (int l = 0; l < 4; l++)
//             {
//                 for (int m = 0; m < 4; m++)
//                 {
//                     if (m == l || m == k || m == j || l == k || l == j || k == j)
//                     {
//                         continue;
//                     }

//                     printf("%d :%d%d%d%d \n", v, digits[j], digits[k], digits[l], digits[m]);
//                     v++;
//                 }
//             }
//         }
//     }

//     return 0;
// }

//Implimenting the same code with other method
#include <stdio.h>
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num;
    printf("Enter the number : ");
    scanf("%d", &num);
    int digits[4], i = 0, temp = num;
    while (temp)
    {
        digits[i] = temp % 10;
        temp /= 10;
        i++;
    }
    int v = 1;
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j % 2)
            {
                swap(&digits[1], &digits[2]);
                printf("%d : %d%d%d%d\n", v++, digits[(0 + i) % 4], digits[(1 + i) % 4], digits[(2 + i) % 4], digits[(3 + i) % 4]);
            }
            else
            {
                swap(&digits[2], &digits[3]);
                printf("%d : %d%d%d%d\n", v++, digits[(0 + i) % 4], digits[(1 + i) % 4], digits[(2 + i) % 4], digits[(3 + i) % 4]);
            }
        }
    }

    return 0;
}