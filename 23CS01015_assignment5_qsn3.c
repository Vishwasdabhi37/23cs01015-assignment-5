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

// Implimenting the same code with other method
#include <stdio.h>
int ans[24];
int ansvar = 0;
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
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 6; j++)
        {
            if (j % 2)
            {
                swap(&digits[1], &digits[2]);
                int ansnum = digits[(0 + i) % 4] * 1000 + digits[(1 + i) % 4] * 100 + digits[(2 + i) % 4] * 10 + digits[(3 + i) % 4];
                int check = 1;
                for (int i = 0; i < ansvar; i++)
                {
                    if (ansnum == ans[i])
                    {
                        check = 0;
                        break;
                    }
                }
                if (check)
                {
                    ans[ansvar] = ansnum;
                    ansvar++;
                }

            }
            else
            {
                swap(&digits[2], &digits[3]);
                int ansnum = digits[(0 + i) % 4] * 1000 + digits[(1 + i) % 4] * 100 + digits[(2 + i) % 4] * 10 + digits[(3 + i) % 4];
                int check = 1;
                for (int i = 0; i < ansvar; i++)
                {
                    if (ansnum == ans[i])
                    {
                        check = 0;
                        break;
                    }
                }
                if (check)
                {
                    ans[ansvar] = ansnum;
                    ansvar++;
                }
            }
        }
    }
    for (int i = 0; i < ansvar; i++)
    {
        printf("%d : %d\n", i + 1, ans[i]);
    }

    return 0;
}
