#include <stdio.h>

int main() {
    int i, verse;

    for (verse = 0; verse < 2; verse++) {
        printf("Onlar arkadan havlar\n");
        for (i = 0; i < 9; i++) {
            printf("Roar\n");
        }

        // Line 3
        printf("Dedim ki \"Her şey bende var\"\n");
        for (i = 0; i < 7; i++) {
            printf("Var\n");
        }
        printf("(Heh)\n\n");
    }
    return 0;
}