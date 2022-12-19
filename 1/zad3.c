#include <stdio.h>

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    int a = 118, b = 286, count = 20;
    int max = -1, min = -1, sum = 0;
    float average;

    time_t czas;   

    srand( (unsigned int)time(&czas) );

    for(int i=0; i < count; ++i){
        int newRandom = a + rand()%(b-a+1);

        if(i == 0){
            max = newRandom;
            min = newRandom;
        } else {
            if (newRandom > max) max = newRandom;
            else if (newRandom < min) min = newRandom;
        }

        sum += newRandom;
        //printf("%d. %d\n", i+1, newRandom);
    }

    average = (float)sum/(float)count;

    printf("Najmniejsza: %d, Najwieksza: %d, Srednia: %.2f\n", min, max, average);

  return 0;
}