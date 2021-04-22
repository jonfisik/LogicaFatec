#include <stdio.h>
#include <stdlib.h>
// Jonatan Paschoal - 22/04/2021
int main()
{
    float a, b, c;
    a=15;
    b=10;
    c=5;
    float y=0;
    y = a*b/c;
    printf("expressao 1 - %0.1f x %0.1f / %0.1f = %0.1f\n", a, b, c, y);
    y = a/b*c;
    printf("expressao 2 - %0.1f / %0.1f x %0.1f = %0.1f\n", a, b, c, y);
    // A precedencia está a esquerda.
    y = a+b*c;
    printf("expressao 3 - %0.1f + %0.1f x %0.1f = %0.1f\n", a, b, c, y);
    y = a*b+c;
    printf("expressao 4 - %0.1f x %0.1f + %0.1f = %0.1f\n", a, b, c, y);
    // A precedencia está a esquerda.
    y = (a*b)+c;
    printf("expressao 5 - %0.1f x %0.1f + %0.1f = %0.1f\n", a, b, c, y);
    y = a*(b+c);
    printf("expressao 6 - %0.1f x %0.1f + %0.1f = %0.1f\n", a, b, c, y);
    // O parênteses está modificando a precedencia
    return 0;
}
