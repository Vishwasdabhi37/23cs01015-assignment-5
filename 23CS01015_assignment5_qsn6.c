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
    int freqsml[26];
    int freqcap[26];
    for (int i = 0; i < 26; i++)
    {
        freqsml[i] = 0;
        freqcap[i] = 0;
    }
    char arr[n];
    printf("Enter the first word :");
    scanf("%s", &arr);
    for (int i = 0; i < n; i++)
    {
        int check = arr[i];
        if (check > 96)
        {
            int num = arr[i] - 97;
            freqsml[num]++;
        }
        if (check < 96)
        {
            int num = arr[i] - 65;
            freqcap[num]++;
        }
    }
    char word[n];
    printf("Enter the second word : ");
    getchar();
    scanf("%s", &word);
    for (int i = 0; i < n; i++)
    {
        int check = word[i];
        if (check > 96)
        {
            int num = word[i] - 97;
            freqsml[num]--;
        }
        if (check < 96)
        {
            int num = arr[i] - 65;
            freqcap[num]--;
        }
    }
    int check2 = 1;
    for (int i = 0; i < 26; i++)
    {
        if (freqsml[i] < 0)
        {
            check2 = 0;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        if (freqcap[i] < 0)
        {
            check2 = 0;
        }
    }
    if (check2)
    {
        printf("This word can be made from the given word.\n");
    }
    else
        printf("This word can not be made from the given word.\n");

    return 0;
}
