#include <stdio.h>

int main()
{

    int score[3][3] = {0};
    float subject_total[3] = {0};


    for (int i = 0; i < 3; i++)
    {
        printf("enter the %d student grades \n", i + 1);
        for (int j = 0; j < 3; j++)
        {
            printf("enter grade :");
            scanf("%d", &score[i][j]);
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("enter the %d student grades \n", i + 1);
        for (int j = 0; j < 3; j++)
        {

            subject_total[i] = score[j][i] + subject_total[i];
        }
    }


    for (int i = 0; i < 3; i++)
    {
        printf("the %d subject average is %.2f\n", i + 1, (float)subject_total[i] / 3);
    }

    return 0;
}