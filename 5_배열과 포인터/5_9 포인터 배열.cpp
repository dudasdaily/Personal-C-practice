#include <stdio.h>

int main()
{
    char str[3][10] = { "hello", "world", "wow" };

    char *ptr[3];

    for(int i = 0; i < 3; i++)
    {
        ptr[i] = str[i];
        printf("%s\n", ptr[i]);
    }


    return 0;
}