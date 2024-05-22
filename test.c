#include <stdlib.h>

int main() {
    void *ptr = malloc(10000);
    free(ptr);
    free(ptr);
}