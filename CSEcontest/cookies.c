#include <stdio.h>
#include <string.h>

int main() {
    int totalBoxes, days;
    char boxes[101];

    scanf("%d %d", &totalBoxes, &days);
    scanf("%s", boxes);

    int emptyBoxes = 0;
    int eatenCookies = 0;

    for (int i = 0; i < totalBoxes; i++) {
        if (boxes[i] == '@' && eatenCookies < days) {
            eatenCookies++;
            boxes[i] = '.';
        }

        if (boxes[i] == '.') {
            emptyBoxes++;
        }
    }

    printf("%d\n", emptyBoxes);

    return 0;
}
