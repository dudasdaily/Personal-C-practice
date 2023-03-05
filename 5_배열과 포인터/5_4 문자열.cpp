#include <stdio.h>
#include <string.h>

int main()
{
    //5.4.1 문자열의 초기화와 출력
    /*
     char s[6] = "hello";
     char s1[6] = { 'h', 'e', 'l', 'l', 'o', '\0' }; // 문자열의 끝에는 널 문자('\0')가 들어가야함
     char s2[6] = { 'h', 'e', 'l', 'l', 'o', 0 };
     char s3[6] = { 'h', 'e', 'l', 'l', 'o' };//s ~ s3은 다 같은 의미임
 
     char ss[] = "Hello, World!"; //길이가 14인 문자열 생성
     printf("%s\n", ss); // %s ==> 문자열 처음부터 널문자 나올때 까지 출력
 
     char ss1[] = "HI\0IH"; //size 6인 배열 출력할때는 HI만 출력됨
     printf("%d\n", sizeof(ss1));
    */

    //5.4.2 문자열 입력받기
    /*
     char ss2[1000];
 
     printf("문자열 입력 : ");
     scanf("%s", ss2); // scanf는 단어 단위로 입력을 받기 때문에 "Hello, World!"를 입력하면 "Hello," 만 ss2에 입력됨.
     //ss2[]에 나머지 부분은 0으로 채워지지 않음!!
     printf("%s\n%d\n", ss2, ss2[10]);
    */
    
    //5.4.3 문자열 관련함수
    // strlen(), strcpy(), strcat(), strcmp() <string.h>를 추가해야됨
    
    // strlen() => 문자열 길이를 구하는 함수
    char s[100] = "hello"; // s[0] ~ s[4] 까지 문자 들어있음 s[5]부터는 널문자가 들어있음
    int len = strlen(s); // 문자가 들어있는 s[0] ~ s[4] 까지만 인식해서 strlen(s) == 5임.

    // strcpy() => 배열에서 배열로 복사, 상수형(literal) 문자열 대입
    char s2[100];
    strcpy(s2, s); // 대입연산자 처럼 복사 받는 문자열을 왼쪽으로! strcpy(dest, origin);
    printf("%s\n", s2);
    
    strcpy(s2, "world!"); // 원래 s2에 있던 문자들은 사라짐. 대입연산자와 같은 기능이라 생각하면 편함.
    printf("%s\n", s2);

    // strcat() (String Concatenate) => 앞 문자열에 뒤 문자열을 이음 like +=
    strcat(s, s2);
    printf("%s\n", s);

    //strcpy()와 strcat()는 함수 결과가 널문자를 포함해서 원본 문자열의 길이를 넘어가면 안된다!!
    //이를 보안하기 위해 strncpy()와 strncat()가 있음
    //https://blockdmask.tistory.com/348 여기 참고하자

    char s3[10] = "Hello";

    strncat(s3, "World!", sizeof(s3));

    printf("%s\n", s3, sizeof(s3));
    



    return 0;
}