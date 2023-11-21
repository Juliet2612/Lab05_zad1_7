#include <stdio.h>
#include <windows.h>
#include <stdbool.h>
int main(int argc, char *argv[])
{
    fflush(stdout);
    fflush(stdin);
    SetConsoleOutputCP(CP_UTF8);
    int a = 5, b = 6, c = 5, d = 1;
    _Bool x1 = false;
    bool x2 = false;

    x1 = a < b || a < c && c < d;
    printf("\nWartość wyrażenia bez nawiasów: ");
    printf("%s", x1?"true":"false");
    printf("\n%d", x1);

    x2 = (a < b || a < c) && c < d;
    printf("\n\nWartość wyrażenia z nawiasami: ");
    printf("%s", x2?"true":"false");
    printf("\n%d", x2);
    fflush(stdin);
    getchar();
    return 0;
}