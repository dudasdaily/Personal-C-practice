#include <stdio.h>

int main()
{
    //더블 포인터가 가리키는 포인터의 주소를 바꾸면 포인터가 가리키고 있던 변수의 주소도 바뀔까?
    int a = 10, d = 20;
    int* b = &a;
    int** c = &b;

    printf("a: %d // &a: %d // &d: %d\n", a, &a, &d);

    *c = &d;
    printf("a: %d // &a: %d // &d: %d\n", a, &a, &d);
    printf("================================================================\n");
    //결론 : 아니다. 포인터의 주소를 바꾸면 포인터가 다른 주소를 가리킬 뿐이다.

    //포인터의 역참조 기능으로 변수에 들어 있는 값을 바꾸면 변수의 주소도 바뀔까?
    printf("&a : %d\n", &a);
    *b = 15;
    printf("&a : %d\n", &a);
    printf("================================================================\n");
    //결론 : 아니다. 주소는 그대로고 값만 바뀐다.

    //&변수 + 1 == &변수 + 1 * (변수의 크기)는 인정하나, 왜 &변수 + 2 == &(변수) + 2 * (변수의 크기) 인가?
    int a = 20;
    int* ptr = &a;
    ptr++;
    //추론 : 포인터에 변수의 메모리 주소를 담고 포인터 + 1을 했을 때 변수 타입별 크기만큼 커지는 논리일듯?


    return 0;
}