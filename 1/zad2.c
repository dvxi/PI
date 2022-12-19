#include <stdio.h>

int main(void) {

    int count = 0;

    for(int i = -4; i < 99; i+=4){
        if(i % 5 != 0){
            printf("%d\n", i);
            count += 1;
        }
    }

    printf("Takich liczb jest %d\n", count);

    return 0;
}