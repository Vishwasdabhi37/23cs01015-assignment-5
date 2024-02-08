#include <stdio.h>
#include <stdlib.h>
int main()
{
    int * arr=(int *)malloc(10*sizeof(int));
    printf("Enter the elements of the array\n");
    for (int i = 0; i < 10; i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Printing the array elements : \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ",arr[i]);
    }
    free(arr);
    return 0;
}