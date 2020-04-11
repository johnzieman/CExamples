#include <stdio.h>

int main()
{
    int num = 7;

    (num % 2 != 0) ? printf("%d is odd\n", num) : printf("%d is even", num);

    printf("There %s", (num == 1) ? "is" : "are");
    printf("%d %s \n", (num == 1) ? "apple" : "apples");
    return 0;
}