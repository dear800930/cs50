
#include <stdio.h>
#include <cs50.h>

void build(int n);
int answer;

int main(void)
{
    do
    {
    answer = get_int("How tall is the castle? ");
    }
    while (answer <1 || answer >8);
    if (answer > 0 && answer < 9)
    {
        build(answer);
    }
}

// build function

void left(int i, int n)
{
    for (int j = 0; j < n - i; j++)
    {
        printf(" ");
    }
    for (int j = 0; j < i; j++)
    {
        printf("#");
    }
}

void right(int i, int n)
{
    for (int j = 0; j < i; j++)
    {
        printf("#");
    }
}

void build(int n)
{
    for (int i = 1; i <= n; i++)
    {
        left(i, n);
        printf("  ");
        right(i, n);
        printf("\n");
    }
}
