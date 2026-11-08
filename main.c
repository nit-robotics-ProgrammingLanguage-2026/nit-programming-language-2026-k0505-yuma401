#include <stdio.h>

int main(void)
{
    int input;
    scanf("%d", &input);
    if (!(input >= 0 && input < 10))
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }
    return 0;
}
