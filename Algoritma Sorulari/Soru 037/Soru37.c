//! Fibonacci serisinin n. elemanını özyinelemeli fonksiyon kullanarak hesaplayınız.
#include <stdio.h>
#include <stdlib.h>
int fibonacci(int x);
int main()
{
    int n;
    printf("sayiyi girinnizn : ");
    scanf("%d", &n);
    printf("%d",fibonacci(n));
    return 0;
}
int fibonacci(int x)
{
    if (x <= 1)
        return x;
    return fibonacci(x - 1) + fibonacci(x - 2);
}
