#include <stdio.h>

void run_test(void) __attribute__((weak));
int main() {
    printf("Hello CI/CD with GitHub Actions!\n");
    if (run_test) {
        run_test();
    }
    return 0;
} 
