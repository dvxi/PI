#include <stdio.h>

int main(void) {

    int givenNumber = 1;

    int count20, count10, count5, reducedNumber;

    for(int i = 0; i < 3; i++) {
        printf("Podaj liczbe podzielna przez 5 (ilosc prob: %d): ", 3-i);
        scanf("%d", &givenNumber);

        if(givenNumber % 5 == 0){
            i=3;
        } else if (i==2) {
            printf("3 razy podano liczbe niepodzielna przez 5. Koniec programu!\n");
            return 1;
        }
    }

    count20 = (givenNumber / 20);
    givenNumber -= (20 * count20);
    count10 = (givenNumber / 10);
    givenNumber -= (10* count10);
    count5 = (givenNumber / 5);

    printf("Wyplac:\n %d banknotow o nominale 20,\n %d banknotow o nominale 10,\n %d banknotow o nominale 5\n", count20, count10, count5);

    return 0;
}