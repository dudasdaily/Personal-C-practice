#include <stdio.h>
#include <string.h>

int main()
{
    int n; scanf("%d", &n);
    int cnt = 0, score[n] = {0};
    char str[81] = {0};
    char tmp[81] = {0};

    for(int i = 0; i < n; i++)
    {
        scanf(" %s", str);

        int j = 0;
        while(str[j] != 0)
        {
            if(str[j] == 'O')
            {
                cnt++;
                j++;
            }
            
            else if(str[j] == 'X')
            {   
                for( ; cnt > 0; cnt--)
                    score[i] += cnt;
                
                j++;
            }
        }
    }

    for(int i = 0; i < n; i++)
        printf("%d\n", score[i]);

    return 0;
}