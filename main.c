#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a = 10;
    int b = 20;
    printf("a = %d and b = %d before swap\n",a,b);
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a = %d and b = %d after swap\n",a,b);
    return 0;
}
