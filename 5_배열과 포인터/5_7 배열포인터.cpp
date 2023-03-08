#include <stdio.h>


//배열 포인터는 2차원 배열의 행을 출력할 때 유용하게 사용할 수 있다.
int main()
{
    int arr[5] = { 1, 2, 3, 4, 5 };
    int (*ptr)[5] = &arr;//배열 포인터 선언

    printf("%d %d\n", *ptr + 1, &arr + 1);

    for(int i = 0; i < 5; i++)
        printf("%d ", (*ptr)[i]);
    
    printf("\n");

    int arr_2[3][4] = { {1,2,3,4}, {5, 6, 7, 8}, {9, 10, 11, 12} };
    int (*ptr2)[4] = &arr_2[2]; // arr_2 의 3행을 저장함
    

    return 0;
}