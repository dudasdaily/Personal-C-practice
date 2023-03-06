#include <stdio.h>

int main()
{
    //포인터는 변수를 가리키는 것.
    //int* b; b = &a; 의 의미  : int형 변수 a를 가리키는 포인터 b
    int a = 10;
    int* b = &a; // 포인터 변수를 선언할때 사용하는 *과 역참조(dereferencing)를 할때 사용하는 *은 다른 의미다.
    int** c = &b;

    // a == *b == **c // &a == b == *c // &b == c
    printf("%d\n", &a);
    printf("%d\n", b);
    printf("%d\n", &b);
    printf("%d\n", c);
    printf("%d\n", *b);
    printf("%d\n", *c);
    printf("%d\n", **c);

    return 0;
}