#include <stdio.h>
#include <string.h>

int main()
{
    char balls[51];
    scanf("%s", balls);
    int initial = 1;
    for (int i = 0; i < strlen(balls); i++)
    {
        if (balls[i] == 'A')
        {
            if (initial == 1)
            {
                initial = 2;
            }
            else if ((initial == 2) || (initial == 3))
                {
                    initial = 1;
                }
        }
        else if (balls[i] == 'B')
        {
            if (initial == 2)
            {
                initial = 3;
            }
            else if (initial == 1)
            {
                initial = 1;
            }
        }
        else
        {
            if (initial == 3)
            {
                initial = 1;
            }
        }
    }
    printf("%d", initial);
    return 0;
}
