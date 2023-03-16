#include <stdio.h>

int main()
{
    const int secret_code = 11023;
    int check_num = 0;

    do
    {
        printf("Enter Secret Code : ");
        scanf("%d", &check_num);
    }
    while(check_num != secret_code);

    printf("success!\n");

    return 0;
}