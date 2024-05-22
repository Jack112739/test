#include <stdlib.h>
#include <stdio.h>

void bar(void *ptr) {
    free(ptr);
}

void foo(void *ptr) {
    int a;
    scanf("%d", &a);
    if(a) bar(ptr);
    else exit(1);
}

int main() {
    void *ptr = malloc(10000);
    free(ptr);
    foo(ptr);
}