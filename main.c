#include <stdio.h>

int main(void)
{
    int input;
    int is_ok;

    // キーボードから整数を入力する
    scanf("%d", &input);

    // 0未満、10以上12未満、15以上でなければOK
    is_ok = !(input < 0 || (input >= 10 && input < 12) || input >= 15);

    // 判定結果を表示する
    if (is_ok == 1)
    {
        printf("OK");
    }
    else
    {
        printf("NG");
    }

    return 0;
}