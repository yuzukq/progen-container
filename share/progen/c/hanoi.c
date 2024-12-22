#include <stdio.h>

void hanoi(int layer, char from, char to, char via) {
    if (layer > 1) {
        hanoi(layer - 1, from, via, to);
        printf("%c: -> %c\n", from, to);
        hanoi(layer - 1, via, to, from);
    } else {
        printf("%c: -> %c\n", from, to);
    }
}

int main() {
    int number;
    printf("number of layers: ");
    scanf("%d", &number);
    hanoi(number, 'A', 'C', 'B');
    return 0;
}

