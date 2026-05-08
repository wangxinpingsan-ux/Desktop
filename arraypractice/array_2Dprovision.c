#include <stdio.h>

int main()
{

    int score[3][3] = {0};
    float total[3] = {0};

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

            total[i] = score[j][i] + total[i];
        }
    }

    for (int i = 0; i < 3; i++)
    {
        printf("the %d student average grades is %.2f\n", i + 1, (float)total[i] / 3);
    }

    return 0;
}