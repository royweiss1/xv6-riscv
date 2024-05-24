#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, int *argv[]) {
    printf("current process is using %d bytes! we'll use malloc now...",memsize());
    void *temp = malloc(20000); // allocate 20000 bytes
    printf("current process is using %d bytes! we'll use free now...",memsize());
    free(temp); // free the allocated memory
    printf("current process is using %d bytes! done!",memsize());
    exit(0,0);
}