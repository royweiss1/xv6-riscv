#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"


int main() {
    // Print initial memory size
    printf("Initial memory size: %lu bytes\n", memsize());

    // Allocate 20k more bytes of memory
    char* buffer = malloc(20 * 1024);
    if (!buffer) {
        printf("Failed to allocate memory\n");
        return 1;
    }

    // Print memory size after allocation
    printf("Memory size after allocation: %lu bytes\n", memsize());

    // Free the allocated array
    free(buffer);

    // Print memory size after release
    printf("Memory size after release: %lu bytes\n", memsize());
    // is the same because free does not return memory to the OS it just marks it as available for future malloc calls.

    return 0;
}