#include <stdio.h>

int main(void)
{
    int input;

    // キーボードから整数を入力する
    scanf("%d", &input);

    // 0以上10未満ではない場合はOK
    if (input < 0 || input >= 10)
    {
        printf("OK");
    }

    // 0以上10未満の場合はNG
    if (input >= 0 && input < 10)
    {
        printf("NG");
    }

    return 0;
}