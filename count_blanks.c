#include <stdio.h>

/* count lines, blanks, and tabs in input */
int main() {
    int c, nl, nt, nb;
    nl = 0;
    nt = 0;
    nb = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            ++nl;
        }
        if (c == '\t') {
            ++nt;
        }
        if (c == ' ') {
            ++nb;
        }
    }
    printf("lines: %d\n", nl);
    printf("tabs: %d\n", nt);
    printf("blanks: %d\n", nb);
}
