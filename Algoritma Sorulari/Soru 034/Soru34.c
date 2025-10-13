//Bu sorunun ekran ciktisi nedir 
#include <stdio.h>
#include <stdlib.h>
void Fnc(int x);
int main()
{
    int x = 3;
    Fnc(5);

    return 0;
}
void Fnc(int n)
{
    if (n > 0)
    {
        printf("%d", n);
        Fnc(n-1);
        Fnc(n-1);
    }
    
}
