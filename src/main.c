#include <stdio.h>
#include "module1.h"
#include "module2.h"

int main()
{
    printf("Hello, World!\n");
    module1_function();
    module2_function();
    getchar();
    return 0;
}
