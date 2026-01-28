#include <stdio.h>

void print_1_10()
{
    for (int i = 1; i<=10; i++)
    {
        printf("%d\n", i);
    }
}

void print_2_20()
{
    for (int i=2; i<21; i++)
    {
        printf("%d\n", i);
    }
}

int main()
{
    print_1_10();
    print_2_20();
}

