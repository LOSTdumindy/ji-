#include <stdio.h>

int main ()
{
    int maze[5][5] = {0};
    int c = 0;
    int i, a, b = 0;
    while(c <= 5)
    {
        int j;
        printf("Enter the location of obstacle %d: ", a + 1);
        scanf("%d %d", &i, &j);
        if (maze[i][j] == 0)
        {
            maze[i][j] = 1;
        }
        else
        {
            printf("Error\n");
            printf("Enter the location of obstacle %d: ", a + 1);
            scanf("%d %d", &i, &j);
        }
        a++;
        b++;
        c++;
    }
        for (i = 0; i < 5; ++i)
        {
            int j;
            for (j = 0; j < 5; ++j)
            {
                printf("%d ", maze[i][j]);
            }
            printf("\n");
        }
        int j;
        printf("Enter the starting location: ");
        scanf("%d %d", &i, &j);
        if (maze[i][j] == 0)
        {

            if (maze[i-1][j] == 0)
            {
                printf("move up\n");
            }
            if (maze[i+1][j] == 0)
            {
                printf("move donw\n");
            }
            if (maze[i][j-1] == 0)
            {
                printf("move left\n");
            }
            if (maze[i][j+1] == 0)
            {
                printf("move right\n");
            }

        }
        else
        {
            printf("You cant start there");
        }


    return 0;
}
