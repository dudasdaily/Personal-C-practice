#include <stdio.h>

int main()
{

    //1번문제
    /*
        int score;

        printf("점수 입력 : ");
        scanf("%d", &score);

        if(90 <= score && score <= 100)
        printf("A\n");

        else if(80 <= score && score <= 89)
        printf("B\n");

        else if(70 <= score && score <= 79)
        printf("C\n");

        else if(60 <= score && score <= 69)
        printf("D\n");

        else if(0 <= score && score <= 59)
        printf("F\n");

        else
        printf("잘못 입력하셨습니다 %d\n", score);
    */

    //2번문제
    /*
     int natural;
     printf("자연수 입력 : ");
     scanf("%d", &natural);
 
     for(int i = 1; i <= natural; i++)
     {
        if(natural % i == 0)
        printf("%d ", i);
     }
 
     printf("\n");
    */
    
    //3번문제
    /*
     int n;
     
     printf("자연수 입력 : ");
     scanf("%d", &n);
     
     for(int i = 1; i <= n; i++)
     {
         if(i % 10 == 3)
         printf("* ");
 
         else if(i % 10 == 6)
         printf("* ");
 
         else if(i % 10 == 9)
         printf("* ");
 
         else
         printf("%d ", i);        
     }
 
     printf("\n");
    */
    
    //4번문제
    /*
     int n;
     
     printf("자연수 입력 : ");
     scanf("%d", &n);
 
     for(int i = 1; i <= n; i++)
     {
         for(int j = 1; j <= i; j++)
         printf("%d ", j);
 
         printf("\n");
     }
    */
    
    //5번문제
    /*
     int n;
 
     printf("자연수 입력 : ");
     scanf("%d", &n);
 
     for(int i = n; i >= 1; i--)
     {
         for(int j = i; j >= 1; j--)
         printf("%d ", j);
 
         printf("\n");
     }
    */

    //6번문제
    /*
     int n;
     
     printf("자연수 입력 : ");
     scanf("%d", &n);
 
     for(int i = n; i >= 1; i--)
     {
         for(int j = 1; j <= i; j++)
         printf("%d ", j);
 
         printf("\n");
     }
    */
    
    //7번문제
    /*
     int n;
      
     printf("자연수 입력 : ");
     scanf("%d", &n);
 
     for(int i = 1; i <= n; i++)
     {
         for(int j = 1; j <= (2 * i) - 1; j += 2)
         printf("%d ", j);

        printf("\n");
     }
    */

    //8번문제
    /*
     int n;
      
     printf("자연수 입력 : ");
     scanf("%d", &n);
 
     for(int i = 1; i <= n; i++)
     {
         for(int j = 1; j <= (2 * i) - 1; j++)
         printf("%d ", j);
 
         printf("\n");
     }
    */
    
    
    return 0;
}