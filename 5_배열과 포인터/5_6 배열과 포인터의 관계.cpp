#include <stdio.h>

int main()
{
    //주솟값에 정수 값 더하기
    int a = 10;
    printf("&a : %d\n", &a); // &a == 100이라 가정
    printf("(&a) + 1 : %d\n", (&a) + 1); // 104, int가 4바이트이기 때문
    printf("(&a) + 2 : %d\n", (&a) + 2); // 108

    //포인터에 정숫값 더하기
    int* ptr = &a;
    printf("ptr : %d\n", ptr);
    printf("ptr +  1 : %d\n", ptr + 1);
    printf("ptr + 11 : %d\n", ptr + 11);

    //배열의 n번째 칸의 주솟값 구하기
    int arr[5] = { 1, 2, 3, 4, 5 };
    for(int i = 0; i < 5; i++)
        printf("%d ", &arr[i]); // 4씩 차이가 날 것임
    
    printf("\n");


    return 0;
}