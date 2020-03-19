//
//  replace_blanks.c
//  
//
//  Created by Giang Ha Le on 3/19/20.
//

#include <stdio.h>

/* This program copies the input and replaces each blank character with another character. */

int main() {
    char c;
    c = getchar();
    while (c != EOF) {
        if (c == ' ') {
            putchar ('\\');
            putchar ('b');
        }
        if (c == '\t') {
            putchar ('\\');
            putchar ('t');
        }
        if (c == '\\') {
            putchar ('\\');
            putchar ('\\');
        }
        else {
            putchar(c);
        }
        c = getchar();
    }
}
