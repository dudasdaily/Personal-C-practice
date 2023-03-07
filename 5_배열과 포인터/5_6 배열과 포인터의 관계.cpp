#include <stdio.h>

int main()
{
    //주솟값에 정수 값 더하기
    int a = 10;
    printf("&a : %d\n", &a); // &a == 100이라 가정
    printf("(&a) + 1 : %d\n", (&a) + 1); // 104, int가 4바이트이기 때문
    printf("(&a) + 2 : %d\n", (&a) + 2); // 108

    //포인터에 정숫값 더하기
    int* ptr = &a; //포인터를 선언할 때 가리키는 변수의 타입을 적어주는 이유이기도 함!
    printf("ptr : %d\n", ptr);
    printf("ptr +  1 : %d\n", ptr + 1);
    printf("ptr + 2 : %d\n", ptr + 2);

    //배열의 n번째 칸의 주솟값 구하기
    int arr[5] = { 1, 2, 3, 4, 5 };
    for(int i = 0; i < 5; i++)
        printf("%d ", &arr[i]); // 4씩 차이가 날 것임 arr[i] 의 주솟값 == arr[0] + i;
    //배열명(arr)은 배열의 0번째 칸의 주소와 같음!

    //배열의 이름과 배열의 0번 칸의 주솟값
    printf("%d %d", &arr, &arr[0]);

    //포인터에 배열의 이름 집어넣기
    int* ptr_a = arr;

    printf("%d\n", &arr);
    printf("%d\n", ptr);
    printf("%d\n", arr[3]);
    printf("%d\n", *(arr + 3));
    printf("%d\n", *(ptr + 3));
    printf("%d\n", ptr[3]);



    return 0;
}