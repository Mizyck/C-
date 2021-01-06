#include <stdio.h>
float cal(float, float);
int main(void)
{
    int i, j;
    float num[20], min;
    
    for (i = 0; i < 10; i++)
    {
        scanf("%f", &num[i]);
    }

    min = fabs(num[1] - num[0]);

    for (i = 0; i < 9; i++)
    {
        for (j = i + 1; j < 10; j++)
        {
            if (min > cal(num[i], num[j]))
            {
                min = cal(num[i], num[j]);
            }
        }
        
    }

    printf("%.2f", min);
    return 0;
}

float cal(float a, float b)
{
    a = fabs(a - b);
    return a;
}
