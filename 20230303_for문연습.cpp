#include <stdio.h>


int main()
{
    //for문으로 별 출력
    /*
    char star[11] = {' ', }; // 이거 안하고 실행하면 n+1번째 초기화가 안되있어서 무작위 값이 출력됨

    for(int i = 1; i <= 10; i++)
    {
        star[i - 1] = '*';
        printf("%s\n", star);
        //printf("%d\n", star[i]);
    }
    */
   
   //1부터 n까지 자연수의 합
   /*
   int n, sum = 0;

   printf("자연수 입력 : ");
   scanf("%d", &n);

   for(int i = 1; i <= n; i++)
   {
       sum += i;
   }

   printf("1부터 %d까지의 합 : %d\n", n, sum);
   */

  //구구단 출력(중첩 for문)
  for(int i = 1; i <= 9; i++)
  {
      for(int j = 1; j <= 9; j++)
      printf("%d * %d = %d\t", j, i, i * j);

      printf("\n");
  }

 return 0;
}


