// #include <stdio.h>
// #include <stdlib.h>
// int main()
// {
//     int * arr=(int *)malloc(10*sizeof(int));
//     printf("Enter the elements of the array\n");
//     for (int i = 0; i < 10; i++)
//     {
//         scanf("%d",&arr[i]);
//     }
//     printf("Printing the array elements : \n");
//     for (int i = 0; i < 10; i++)
//     {
//         printf("%d ",arr[i]);
//     }
//     free(arr);
//     return 0;
// }
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the size of the array : ");
    scanf("%d", &n);
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    char arr[n];
    scanf("%s", &arr);
    for (int i = 0; i < n; i++)
    {
        int num = arr[i] - 97;
        freq[num]++;
    }

    char word[n];
    printf("Enter the word : ");
    getchar();
    scanf("%s", &word);
    for (int i = 0; i < n; i++)
    {
        int num = word[i] - 97;
        freq[num]--;
    }
    int check = 1;
    for (int i = 0; i < 26; i++)
    {
        if (freq[i] < 0)
        {
            check = 0;
        }
    }
    if (check)
    {
        printf("This word can be made from the given word\n");
    }
    else
        printf("This word can not be made from the given word\n");

    return 0;
}
