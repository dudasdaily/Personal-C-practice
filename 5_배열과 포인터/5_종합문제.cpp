#include <stdio.h>

int main()
{
    //1번문제
    /*
     int n;
     printf("숫자의 개수 입력 : ");
     scanf("%d", &n);
 
     int arr[n];
 
     printf("숫자 입력 : ");
     for(int i = 0; i < n; i++)
         scanf("%d", &arr[i]);
     
     for(int i = 1; i < n; i += 2)
         printf("%d ", arr[i]);
     
     printf("\n");
 
     for(int i = 0; i < n; i += 2)
        printf("%d ", arr[i]);
    
     printf("\n");
    */

    //4번문제
     int row, col;
     scanf("%d %d", &row, &col);

     int sum[row] = {0};
     int arr[row][col];

     for(int i = 0; i < row; i++)
     {
         for(int j = 0; j < col; j++)
         {
             scanf("%d", &arr[i][j]);
             sum[i] += arr[i][j];
         }
     }
    
    
    return 0;
}