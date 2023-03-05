#include <stdio.h>

int main()
{
    //5.1 배열의 선언과 초기화
     //배열(array)이란 서로 같은 자료형의 변수를 특정 개수만큼 나열해 놓은 것
     int arr[5]; //int형 변수를 5칸 담는 ary배열 선언 arr[0] ~ arr[4]
     arr[1] = 3; //ary배열 2번째 칸에 3을 대입
 
     int arr_2[5] = {1, 3, 5, 7, 9}; // 배열 선언하고 나서 따로 중괄호로 초기화는 불가능 //// int arr[3]; arr[3] = {1, 3, 5} --> 불가능
 
     for(int i = 0; i < 5; i++)
         printf("ary_2[%d] = %d\n", i, arr_2[i]); //arr_2[0] ~ arr_2[4] 까지 출력
 
     for(int i = 0; i < sizeof(arr_2) / sizeof(arr_2[0]); i++) // i < 배열크기 의 다른표현
         printf("ary_2[%d] = %d\n", i, arr_2[i]);
 
     for(int i = 0; i < 5; i++) // 배열의 내용 전체를 다른 배열로 한번에 복사 불가능 //int arr[5] = arr_2 --> 불가능 // 대신 반목문을 써라
         arr[i] = arr_2[i];
     
     int arr_3[] = { 1, 3, 5 }; //3칸짜리 배열 생성
     int arr_4[5] = { 1, 2, 3 }; //1 2 3 0 0 크기에 맞지 않게 초기화 했을경우 남은 부분은 0으로 채워짐

    return 0;
}