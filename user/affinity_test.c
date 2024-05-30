#include "kernel/types.h"
#include "kernel/stat.h"
#include "user/user.h"

int main(int argc, char *argv[]) {
    set_affinity_mask(0b00000101);

    while(1){
        //TODO: remove this for nice testing
        printf("current process id: %d\n", getpid());


    }
}