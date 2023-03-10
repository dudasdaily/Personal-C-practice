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
    
    for(int (*ptr_a)[4] = arr_2; ptr_a < arr_2 + 3; ptr_a++) //ptr_a + 1 == arr_2 + 1 == &arr_2[1][0]
    {
        for(int* pj = *ptr_a; pj < *ptr_a + 4; pj++)
        {
            printf("%-2d ", *pj);
        }

        printf("\n");
    }

    printf("%d\n", &arr_2[1][0]);
    printf("%d\n", arr_2 + 1);
    printf("%d\n", *ptr_a);
    

    return 0;
}