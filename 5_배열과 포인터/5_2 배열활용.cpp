//5.2 배열 활용 
#include <stdio.h>
int main()
{
    //5.2.1 거꾸로 출력하기
    /*
     int n;
     
     printf("입력할 숫자의 개수 : ");
     scanf("%d", &n);
 
     int arr[n]; //컴파일러에 따라 index에 상수만 들어갈 수도 있음
 
     for(int i = 0; i < n; i++)
     {
         printf("%d번째 숫자를 입력하세요 : ", i + 1);
         scanf("%d", &arr[i]);
     }
 
     for(int i = n - 1; i >= 0; i--)
         printf("%d ", arr[i]);
     
     printf("\n");
    */
    
    //5.2.2 최대, 최소 구하기
    /*
     int n, max, min;
     
     printf("입력할 숫자의 개수 : ");
     scanf("%d", &n);
 
     int arr[n];
 
     printf("숫자 %d개를 입력 : ", n);
 
     for(int i = 0; i < n; i++)
         scanf("%d", &arr[i]);
     
     max = arr[0];
     for(int i = 0; i < n; i++)
     {
         if(max < arr[i])
             max = arr[i];
     }
 
     min = arr[0];
     for(int i = 0; i < n; i++)
     {
         if(min > arr[i])
             min = arr[i];
     }
 
     printf("Max : %d / Min : %d\n", max, min);
    */
    
    //5.2.3 짝수의 개수 구하기
    /*
     int n, cnt = 0;
     
     printf("입력할 숫자의 개수 : ");
     scanf("%d", &n);
 
     int arr[n];
 
     printf("숫자 %d개를 입력 : ", n);
 
     for(int i = 0; i < n; i++)
         scanf("%d", &arr[i]);
     
     for(int i = 0; i < n; i++)
     {
         if(arr[i] % 2 == 0)
            cnt++;
     }

     printf("짝수의 개수 : %d\n", cnt);
    */
   
   return 0;
}