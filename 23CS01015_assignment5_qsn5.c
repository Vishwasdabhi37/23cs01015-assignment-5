// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// struct student
// {
//     int sroll;
//     char sname[20];
//     char branch[15];
//     char programme[10];
//     float CGPA;
// };

// int main()
// {
//     int n;
//     printf("Enter N : ");
//     scanf("%d", &n);
//     struct student *students = (struct student *)malloc(n * sizeof(struct student));
//     if (students == NULL)
//     {
//         printf("Memory allocation failed\n");
//     }

//     for (int i = 0; i < n; i++)
//     {
//         printf("Enter sroll : ");
//         scanf("%d", &students[i].sroll);
//         getchar();
//         printf("Enter sname : ");
//         scanf("%s", &students[i].sname);
//         getchar();
//         printf("Enter branch : ");
//         scanf("%s", &students[i].branch);
//         getchar();
//         printf("Enter programme : ");
//         scanf("%s", &students[i].programme);
//         getchar();
//         printf("Enter CGPA : ");
//         scanf("%f", &students[i].CGPA);
//         getchar();
//     }
//     char branch[15], programme[10];
//     printf("Enter the branch : ");
//     scanf("%s", &branch);
//     printf("Enter the programme : ");
//     scanf("%s", &programme);
//     char *branchp = branch;
//     char *programmep = programme;
//     int max = 0, index = 0;
//     for (int i = 0; i < n; i++)
//     {

//         if ((strcmp(students[i].branch, branchp)) == 0 && (strcmp(students[i].programme, programmep)) == 0)
//         {
//             if (students[i].CGPA > max)
//             {
//                 max = students[i].CGPA;
//                 index = i;
//             }
//         }
//     }
//     printf("The student who secured highest CGPA in %s branch and %s programme is : %s\n", branch, programme, students[index].sname);
//     return 0;
// }

#include <stdio.h>
int main()
{
    int num = 0;
    while (1)
    {
        int n;
        printf("Provide a number : ");
        scanf("%d", &n);
        if (n % 2 == 0)
        {
            num += n;
        }

        char choice;
        printf("Do you want to continue?\n");
        getchar();
        scanf("%c", &choice);
        while (choice != 'Y' && choice != 'y' && choice != 'n' && choice != 'N')
        {
            printf("Not a valid input\n");
            getchar();
            scanf("%c", &choice);
        }
        if (choice == 'Y' || choice == 'y')
        {
            continue;
        }
        if (choice == 'N' || choice == 'n')
        {
            printf("The sum is : %d ", num);
            break;
        }
    }

    return 0;
}
