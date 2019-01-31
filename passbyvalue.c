#include <stdio.h>
// Program Pass by Value
void function1(int *parameter) {
    printf("parameter's address %d\n", parameter);
    parameter = NULL;
}

int main(void) {
    int variable = 111;
    int *ptr = &variable;

    function1(ptr);
    printf("ptr's address %d\n", ptr);
    return 0;
}
