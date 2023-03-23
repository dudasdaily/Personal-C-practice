#include <stdio.h>
#include <string.h>

#define NAME "Jin-Seok Hwang"
#define WIDTH 20
#define ADDRESS "Busan, Korea"

void print_chars(char c, int num);

int main()
{
    print_chars('*', WIDTH);

    printf("\n");
    print_chars(' ', (WIDTH - strlen(NAME)) * 0.5);
    printf("%s", NAME);
    print_chars(' ', (WIDTH - strlen(NAME)) * 0.5);
    printf("\n");


    print_chars(' ', (WIDTH - strlen(ADDRESS)) * 0.5);
    printf("%s", ADDRESS);
    print_chars(' ', (WIDTH - strlen(ADDRESS)) * 0.5);
    printf("\n");

    print_chars('*', WIDTH);
    printf("\n");


    return 0;
}

void print_chars(char c, int num)
{
    for(int i = 0; i < num; i++)
        printf("%c", c);
}