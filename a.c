#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int number, guess, attempts = 0;

    srand(time(0));
    number = rand() % 100 + 1;

    do {
        printf("숫자를 입력하세요: ");
        scanf("%d", &guess);
        attempts++;

        if (guess > number) {
            printf("큽니다!\n");
        } else if (guess < number) {
            printf("작습니다!\n");
        } else {
            printf("%d번 만에 맞췄습니다.\n", attempts);
        }
    } while (guess != number);

    return 0;
}
