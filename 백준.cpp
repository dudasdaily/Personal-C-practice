#include <stdio.h>
#include <string.h>

int main()
{
    int n;

    scanf("%d", &n);

    char s[n][81];
    char (*ptr)[81] = s;
    char tmp[81] = { 0 };

    for(int i = 0; i < n; i++)
        for(int j = 0; j < 81; j++)
            s[i][j] = 0;
    
    for(int i = 0; i < n; i++)
    {
        scanf("%s", tmp);
        for(int j = 0; j < strlen(tmp); j++)
            ptr[i][j] = tmp[j];
    }

    printf("%s", s[0]);



    return 0;
}